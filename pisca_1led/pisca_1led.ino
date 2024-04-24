void setup() {
 pinMode(1, OUTPUT);

}

void loop() {
  int intervalo = 200;
  digitalWrite(1,HIGH);
  delay(intervalo);
  digitalWrite(1,LOW);
  delay(intervalo);
}
