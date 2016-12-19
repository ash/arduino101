int pin[7] = {7, 8, 9, 10, 11, 12, 13};

int num[10][7] = {
// g  a  f  b  c  d  e
  {1, 0, 0, 0, 0, 0, 0}, // 0
  {1, 1, 1, 0, 0, 1, 1}, // 1
  {0, 0, 1, 0, 1, 0, 0}, // 2
  {0, 0, 1, 0, 0, 0, 1}, // 3
  {0, 1, 0, 0, 0, 1, 1}, // 4
  {0, 0, 0, 1, 0, 0, 1}, // 5
  {0, 0, 0, 1, 0, 0, 0}, // 6
  {1, 0, 1, 0, 0, 1, 1}, // 7
  {0, 0, 0, 0, 0, 0, 0}, // 8
  {0, 0, 0, 0, 0, 0, 1}, // 9
};

int count = 0;

void display_digit(int n) {
  for (int c = 0; c != 7; c++) {
    digitalWrite(pin[c], num[n][c]);
  }
}

void setup() {
  for (int c = 0; c != 7; c++) {
    pinMode(pin[c], OUTPUT);
    digitalWrite(pin[c], HIGH);
  }

  digitalWrite(7, LOW);
}

void loop() {
  int value = analogRead(A0);
  Serial.println(value, DEC);

  int digit = 10 * value / 650;
  display_digit(digit);
  delay(100);
}
