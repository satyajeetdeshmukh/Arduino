int potPin = A0; //potentiometer pin to A0
int readValue;
int waitTime = 250;
float volt;

void setup() {
  pinMode(potPin, INPUT); // declare potpin as input
  Serial.begin(9600); // start serial port
  

}

void loop() {

  readValue = analogRead(potPin); // set variable a value
  volt = (5./1023.)*readValue; // calc voltage
  Serial.println(volt);
  delay(waitTime); // time delay

  // 0-5 V = 0-1023
  
}
