
const int button1 = A0;
const int button2 = A1;
const int button3 = A2;
const int button4 = A3;

const int buzzer = A4;

void setup() {
  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);
  pinMode(button3, INPUT_PULLUP);
  pinMode(button4, INPUT_PULLUP);

  pinMode(buzzer, OUTPUT);
}

void loop() {

  if (digitalRead(button1) == LOW) {
    tone(buzzer, 1000, 200);
    delay(300);
  }

  if (digitalRead(button2) == LOW) {
    tone(buzzer, 1200, 200);
    delay(300);
  }

  if (digitalRead(button3) == LOW) {
    tone(buzzer, 1400, 200);
    delay(300);
  }

  if (digitalRead(button4) == LOW) {
    tone(buzzer, 1600, 200);
    delay(300);
  }
}