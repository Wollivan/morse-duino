// the morse you know!

int buttonPin = 4;
int ledPin = 8;
int buzzerPin = 10;

void setup() {
  // got any more of them pins?
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600); // so we can mock the user with harsh words
}

void loop() {
  // yo, what is the button doing rn?
  int buttonState = digitalRead(buttonPin);

  // if pressed (HIGH) then light that LED up and play a b-e-a-YOOOO-tiful tone
  if(buttonState == HIGH) {
    Serial.println("ah, push it");
    digitalWrite(ledPin, HIGH);
    tone(buzzerPin, 600); // 800 because generally morse code tone is 600 - 800 Hz, and 600 Hz sounds best (less piercing)
  } else {
    Serial.println("git gud screb");
    digitalWrite(ledPin, LOW);
    noTone(buzzerPin); // without this, *sad continuous buzzer noises*
  }
}
