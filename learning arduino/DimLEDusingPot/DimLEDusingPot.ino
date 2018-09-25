int potPin = A0; //potentiometer pin to A0
int readValue;
int LEDpin = 9;
int writeValue;

void setup() {
  pinMode(potPin, INPUT); // declare potpin as input
  Serial.begin(9600); // start serial port
  pinMode(LEDpin, OUTPUT);

}

void loop() {

  readValue = analogRead(potPin); // set variable a value
  writeValue =  (255./1023.)*readValue;
  analogWrite(LEDpin, writeValue);

  // 0-5 V = 0-1023
  
}
