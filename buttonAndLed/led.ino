#define ledPin 9
#define buttonPin 6

void setup() {  
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  if(digitalRead(buttonPin) == 1){
    digitalWrite(ledPin, HIGH);
  }

  else{
    digitalWrite(ledPin, LOW);
  }

}
