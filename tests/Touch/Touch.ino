
const int ctsPin  = 12;
int ledPin = 13;
void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(ctsPin, INPUT);
}
 
void loop() {
  int ctsValue = digitalRead(ctsPin);
  if (ctsValue == HIGH){
    digitalWrite(ledPin, HIGH);
    Serial.println("not touched");
  }
  else{
    digitalWrite(ledPin,LOW);
    Serial.println("TOUCHED");
  } 
  delay(500);
  
}
