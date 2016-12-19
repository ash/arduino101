bool state = LOW;
unsigned long prev = 0;

void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  unsigned long now = millis();
  if (now - prev > 500) {
    state = !state;
    digitalWrite(13, state);
    prev = now;
  }
}
