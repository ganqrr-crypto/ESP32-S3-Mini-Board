const int PINLED = 2;



void setup() {

  pinMode(PINLED, OUTPUT);

}

void loop() {

  digitalWrite(PINLED, HIGH);
  delay(1000);

  digitalWrite(PINLED, LOW);
  delay(1000);
}
