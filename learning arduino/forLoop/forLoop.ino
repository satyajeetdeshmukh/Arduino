int yellowLEDPin = 9;
int redLEDPin = 10;
int redOnTime = 150;
int redOffTime = 850;
int yellowOnTime = 450;
int yellowOffTime = 550;
int redBlink = 3;

void setup() {
  pinMode(yellowLEDPin,OUTPUT);  
  pinMode(redLEDPin,OUTPUT);
}

void loop() {
    for(int j=1; j <=redBlink; j=j+1){
      digitalWrite(redLEDPin, HIGH);
      delay(redOnTime);
      digitalWrite(redLEDPin, LOW);
      delay(redOffTime);
    }
    digitalWrite(yellowLEDPin, HIGH);
    delay(yellowOnTime);
    digitalWrite(yellowLEDPin, LOW);
    delay(yellowOffTime);

}
