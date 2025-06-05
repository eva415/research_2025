#include "Adafruit_VL53L0X.h"

Adafruit_VL53L0X lox = Adafruit_VL53L0X();

void setup() {
  Serial.begin(115200);
  
  while (!Serial) { delay(1); }
  
  Serial.println("Initializing Sensors...");
  
  if (!lox.begin()) {
    Serial.println("Failed to boot VL53L0X");
    while (1);
  }
}

void loop() {
  VL53L0X_RangingMeasurementData_t measure;
  lox.rangingTest(&measure, false);

  if (measure.RangeStatus != 4 && measure.RangeMilliMeter != 8191) {
    Serial.print("ToF: ");
    Serial.println(measure.RangeMilliMeter);
  } else {
    Serial.println("ToF: None");
  }

  // Simulated Flex Sensor Readings
  for (int i = 1; i <= 4; i++) {
    float resistance = random(20000, 60000) / 10.0;  // Example resistance values
    float bend = random(-30, 90);  // Example bend angles
    
    Serial.print("Flex Sensor "); Serial.print(i);
    Serial.print(" Resistance: "); Serial.print(resistance);
    Serial.println(" ohms");

    Serial.print("Flex Sensor "); Serial.print(i);
    Serial.print(" Bend: "); Serial.print(bend);
    Serial.println(" degrees");
  }
  
  delay(100);  // Adjust delay if needed
}
