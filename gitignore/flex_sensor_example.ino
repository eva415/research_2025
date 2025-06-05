/******************************************************************************
Flex_Sensor_Example_Multiple.ino
Modified to support 4 flex sensors
******************************************************************************/

const int FLEX_PINS[4] = {A0, A1, A2, A3}; // Pins for the 4 flex sensors

const float VCC = 4.98; // Measured voltage of Arduino 5V line
const float R_DIV = 10000.0; // Measured resistance of 10k resistor

const float STRAIGHT_RESISTANCE = 30275.59; // Resistance when straight
const float BEND_RESISTANCE = 60000.0; // Resistance at 90 degrees

void setup() 
{
  Serial.begin(9600);
  for (int i = 0; i < 4; i++) {
    pinMode(FLEX_PINS[i], INPUT);
  }
}

void loop() 
{
  for (int i = 0; i < 4; i++) 
  {
    int flexADC = analogRead(FLEX_PINS[i]);
    float flexV = flexADC * VCC / 1023.0;
    float flexR = R_DIV * (VCC / flexV - 1.0);
    
    Serial.print("Sensor ");
    Serial.print(i + 1);
    Serial.print(" Resistance: ");
    Serial.print(flexR);
    Serial.println(" ohms");

    float angle = map(flexR, STRAIGHT_RESISTANCE, BEND_RESISTANCE, 0, 90.0);
    
    Serial.print("Sensor ");
    Serial.print(i + 1);
    Serial.print(" Bend: ");
    Serial.print(angle);
    Serial.println(" degrees");
    Serial.println();
  }

  delay(500);
}
