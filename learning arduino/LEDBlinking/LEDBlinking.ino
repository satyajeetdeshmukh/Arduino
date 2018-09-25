int LEDPin = 13; 
int waitTimeOn = 1000;
int waitTimeOff = 500;

void setup() {
  pinMode(LEDPin,OUTPUT);
}

void loop() {
  digitalWrite(LEDPin,HIGH);
  delay(waitTimeOn);
  digitalWrite(LEDPin, LOW);
  delay(waitTimeOff);
}
