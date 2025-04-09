/******************************************************************************
Flex_Sensor_Example_Multiple.ino
Modified to support 4 flex sensors with correct biasing and smoothing
******************************************************************************/

const int FLEX_PINS[4] = {A0, A5, A10, A15}; // Pins for the 4 flex sensors

const float VCC = 4.98; // Measured voltage of Arduino 5V line
const float R_DIV = 100000.0; // Measured resistance of 10k resistor

const float STRAIGHT_RESISTANCE = 30434.78; // Resistance when straight
const float BEND_RESISTANCE = 60000.0; // Resistance at 90 degrees

const int BIAS_SAMPLES = 50; // Number of samples for bias calculation
const int SMOOTH_SAMPLES = 10; // Number of samples for smoothing

float biasADC[4]; // Stores baseline ADC values for each sensor

#include "Adafruit_VL53L0X.h"
Adafruit_VL53L0X lox = Adafruit_VL53L0X();

void setup() 
{
  Serial.begin(115200);
  
  while (!Serial) { delay(1); }
  
  Serial.println("Initializing Sensors...");
  
  // Initialize flex sensor pins
  for (int i = 0; i < 4; i++) {
    pinMode(FLEX_PINS[i], INPUT);
  }

  // Compute bias ADC values at startup
  for (int i = 0; i < 4; i++) {
    float sum = 0;
    for (int j = 0; j < BIAS_SAMPLES; j++) {
      sum += analogRead(FLEX_PINS[i]); // Read sensor values
      delay(5);
    }
    biasADC[i] = sum / BIAS_SAMPLES; // Store average baseline
  }

  if (!lox.begin()) {
    Serial.println("Failed to boot VL53L0X");
    while (1);
  }
  
}

void loop() 
{
  //ToF readings
  VL53L0X_RangingMeasurementData_t measure;
  lox.rangingTest(&measure, false);

  if (measure.RangeStatus != 4 && measure.RangeMilliMeter != 8191) {
    Serial.print("ToF: ");
    Serial.print(measure.RangeMilliMeter);
    Serial.println(" mm");
  } else {
    Serial.println("ToF: None");
  }

  
  for (int i = 0; i < 4; i++) 
  {
    float sum = 0;

    // Smoothen the signal by averaging multiple readings
    for (int j = 0; j < SMOOTH_SAMPLES; j++) {
      sum += analogRead(FLEX_PINS[i]);
      delay(5);
    }
    
    int flexADC = sum / SMOOTH_SAMPLES; // Compute smoothed value
    float correctedADC = flexADC; // Removed unnecessary bias correction

    // Convert ADC reading to voltage
    float flexV = correctedADC * VCC / 1023.0;

    // Prevent division by near-zero voltages
    if (flexV < 0.01) flexV = 0.01;

    // Convert voltage to resistance
    float flexR = R_DIV * (VCC / flexV - 1.0);

    // Print debugging information
//    Serial.print("Sensor ");
//    Serial.print(i + 1);
//    Serial.print(" | ADC: ");
//    Serial.print(correctedADC);
//    Serial.print(" | Voltage: ");
//    Serial.print(flexV, 3);
//    Serial.print("V | Resistance: ");
//    Serial.print(flexR);
//    Serial.println(" ohms");

    // Correct float mapping manually
    float angle = 90.0 * (flexR - STRAIGHT_RESISTANCE) / (BEND_RESISTANCE - STRAIGHT_RESISTANCE);
    angle = constrain(angle, 0, 90); // Ensure angle stays within 0-90 range

    // Print bend angle
    Serial.print("Sensor ");
    Serial.print(i + 1);
    Serial.print(" Bend: ");
    Serial.print(angle);
    Serial.println(" degrees");
  }

  delay(500); // Small delay before next loop iteration
  Serial.println();
}
