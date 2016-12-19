int a = 12;
int b = 13;
int state = LOW;

void setup() {
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);

  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
}

long long t0 = 0;
void loop() {
  long long t = millis();
  if (t - t0 > 1000) {    
    digitalWrite(a, state);
    digitalWrite(b, !state);

    state = !state;
    t0 = t;
  }
}
