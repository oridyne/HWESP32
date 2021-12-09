#include <Arduino.h>
//declare a pin to use for the ADC
const int adcPin = 26;

void setup() 
{
  pinMode(adcPin, INPUT);

  //this sets up the ESP32 to communicate with the Serial Monitor or console on your computer
  //115200 is the buad rate: bits per second
  Serial.begin(115200);
}

void loop() 
{
  //read the ADC
  int adcValue = analogRead(adcPin);
  // geometric mean 1224.74487
  //EDIT THE NEXT LINE TO CALCULATE THE VOLTAGE
  float adcVoltage = adcValue/(4096/3.3);
  
  Serial.print(adcValue);
  Serial.print('\t'); //TAB character

  Serial.print(adcVoltage);
  Serial.print('\n'); //newline

  delay(250);
}
