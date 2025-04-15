/******************************************************************************
Flex_Sensor_Example_Multiple_Calibrated.ino
Supports 4 flex sensors with per-sensor resistance calibration and smoothing
******************************************************************************/

const int FLEX_PINS[4] = {A0, A5, A10, A15}; // Analog pins for 4 flex sensors

const float VCC = 4.98;            // Measured voltage of Arduino 5V line
const float R_DIV = 100000.0;      // Measured resistance of the fixed resistor (100kΩ)

const float BEND_RESISTANCE = 60000.0;  // Estimated resistance when flexed to 90 degrees
const int BIAS_SAMPLES = 50;       // Number of samples for calibration
const int SMOOTH_SAMPLES = 10;     // Number of samples for smoothing

float straightResistance[4];       // Stores baseline resistance per sensor

#include "Adafruit_VL53L0X.h"
Adafruit_VL53L0X lox = Adafruit_VL53L0X();

void setup() 
{
  Serial.begin(115200);
  while (!Serial) { delay(1); }

  Serial.println("Initializing Sensors...");

  for (int i = 0; i < 4; i++) {
    pinMode(FLEX_PINS[i], INPUT);
  }

  // Calibrate baseline resistance per sensor (assumes sensors are straight)
  for (int i = 0; i < 4; i++) {
    float sum = 0;
    for (int j = 0; j < BIAS_SAMPLES; j++) {
      sum += analogRead(FLEX_PINS[i]);
      delay(5);
    }
    float biasADC = sum / BIAS_SAMPLES;
    float flexV = biasADC * VCC / 1023.0;
    straightResistance[i] = R_DIV * (VCC / flexV - 1.0);

    Serial.print("Sensor ");
    Serial.print(i + 1);
    Serial.print(" Calibrated Resistance: ");
    Serial.print(straightResistance[i]);
    Serial.println(" ohms");
  }

  if (!lox.begin()) {
    Serial.println("Failed to boot VL53L0X");
    while (1);
  }
}

void loop() 
{
  // ToF readings
  VL53L0X_RangingMeasurementData_t measure;
  lox.rangingTest(&measure, false);

  if (measure.RangeStatus != 4 && measure.RangeMilliMeter != 8191) {
    Serial.print("ToF: ");
    Serial.print(measure.RangeMilliMeter);
    Serial.println(" mm");
  } else {
    Serial.println("ToF: None");
  }

  // Flex sensor readings
  for (int i = 0; i < 4; i++) 
  {
    float sum = 0;

    for (int j = 0; j < SMOOTH_SAMPLES; j++) {
      sum += analogRead(FLEX_PINS[i]);
      delay(5);
    }

    float avgADC = sum / SMOOTH_SAMPLES;
    float flexV = avgADC * VCC / 1023.0;

    if (flexV < 0.01) flexV = 0.01;  // Avoid division by zero
    float flexR = R_DIV * (VCC / flexV - 1.0);

    float angle = 90.0 * (flexR - straightResistance[i]) / (BEND_RESISTANCE - straightResistance[i]);
    angle = constrain(angle, 0, 90);

    Serial.print("Sensor ");
    Serial.print(i + 1);
    Serial.print(" Bend: ");
    Serial.print(angle);
    Serial.println(" degrees");
  }

  Serial.println();
  delay(500);
}
