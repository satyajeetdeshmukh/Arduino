int yellowLEDPin = 9;
int redLEDPin = 10;
int redOnTime = 150;
int redOffTime = 850;
int yellowOnTime = 450;
int yellowOffTime = 550;
int redBlink;
int yellowBlink;
String redMessage = "The Red LED is blinking";

void setup() {
  Serial.begin(9600);
  pinMode(yellowLEDPin,OUTPUT);  
  pinMode(redLEDPin,OUTPUT);
  String s1 = "Welcome to ";
  String s2 = "the Jungle";
  String s3 = s1 + s2;
  Serial.println(s3);
  Serial.println("How many times to blink the red light?");
  while(Serial.available()==0){ }
  redBlink = Serial.parseInt();
}

void loop() {
  Serial.println(redMessage);
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
