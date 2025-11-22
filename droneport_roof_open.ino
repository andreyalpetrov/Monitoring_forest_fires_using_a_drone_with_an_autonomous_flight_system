const int r1 = 3;
const int r2 = 4;
const int r3 = 5;

void setup() {
  pinMode(9, INPUT_PULLUP);
  pinMode(12, INPUT_PULLUP);

  pinMode(r1, OUTPUT);
  pinMode(r2, OUTPUT);
  pinMode(r3, OUTPUT);

  digitalWrite(r1, LOW);
  digitalWrite(r2, LOW);
  digitalWrite(r3, LOW);
}

void loop() {
  if (digitalRead(9) == LOW) {
    digitalWrite(r3, HIGH);
    delay(13000);
    digitalWrite(r3, LOW);
  }

  if (digitalRead(12) == LOW) {
    digitalWrite(r1, HIGH);
    digitalWrite(r2, HIGH);
    delay(200);
    digitalWrite(r3, HIGH);
    delay(13000);
    digitalWrite(r1, LOW);
    digitalWrite(r2, LOW);
    digitalWrite(r3, LOW);
  }
}
