int yellowLEDPin = 9;
int redLEDPin = 10;
int redOnTime = 150;
int redOffTime = 850;
int yellowOnTime = 450;
int yellowOffTime = 550;
int redBlink = 3;
int yellowBlink = 5;

void setup() {
  Serial.begin(9600);
  pinMode(yellowLEDPin,OUTPUT);  
  pinMode(redLEDPin,OUTPUT);
}

void loop() {
  Serial.println("The Red LED is printing");
  for(int j=1; j <=redBlink; j=j+1){
    Serial.println(j);
    digitalWrite(redLEDPin, HIGH);
    delay(redOnTime);
    digitalWrite(redLEDPin, LOW);
    delay(redOffTime);
  }
  Serial.println(" ");
  
  digitalWrite(yellowLEDPin, HIGH);
  delay(yellowOnTime);
  digitalWrite(yellowLEDPin, LOW);
  delay(yellowOffTime);

}
