
int ledPin = 12;

int i = 0;
void setup() {
  // put your setup code here, to run once:
   pinMode(ledPin, OUTPUT) ; 
}

void loop() {
  // put your main code here, to run repeatedly:
  if (i < 4) {
      digitalWrite(ledPin, HIGH);
      delay(2000);
      digitalWrite(ledPin, LOW);
      delay(2000);
  } else if (i < 10) {
      digitalWrite(ledPin, HIGH);
      delay(1000);
      digitalWrite(ledPin, LOW);
      delay(1000);
  } else if (i < 100) {
      digitalWrite(ledPin, HIGH);
      delay(50);
      digitalWrite(ledPin, LOW);
      delay(50);
  } else {
      digitalWrite(ledPin, LOW);
      i = 100;
  }
  
  i = i + 1;
}
