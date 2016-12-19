void setup() {
}

int t0 = 0;
long int c = 0;
void loop() {
  c++;
  long int t = millis();
  if (t - t0 > 1000) {
    Serial.println(c);
    c = 0;
    t0 = millis();
  }
}
