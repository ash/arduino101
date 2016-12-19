void setup() {
  pinMode(13, OUTPUT);
  pinMode(2, INPUT_PULLUP);
}

void loop() {
  bool state = digitalRead(2);
  digitalWrite(13, !state);
}
