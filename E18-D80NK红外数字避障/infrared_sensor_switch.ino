// Adjustable Infrared Sensor Switch (E18-D80NK)
// Author: Jiahui Tang
// Date: 2016-1-15

const int InfraredSensorPin = 4;//Connect the signal pin to the digital pin 4
const int LedDisp = 13;

void setup()
{
  Serial.begin(57600);
  Serial.println("Start!");  
  pinMode(InfraredSensorPin,INPUT);
  pinMode(LedDisp,OUTPUT);
  digitalWrite(LedDisp,LOW);
}

void loop()
{
  if(digitalRead(InfraredSensorPin) == LOW)  digitalWrite(LedDisp,HIGH);
  else  digitalWrite(LedDisp,LOW);
  Serial.print("Infrared Switch Status:");
  Serial.println(digitalRead(InfraredSensorPin),BIN);
  delay(50);
}
