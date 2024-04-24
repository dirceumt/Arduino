void setup() {
  pinMode(1, OUTPUT);
  pinMode(0, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, INPUT);


}

void loop() {
  int pisca1 = 0;
  int pisca2 = 0;
  int pisca3 = 0;
  int estadoBotao;
  estadoBotao = digitalRead(3);

  digitalWrite(0,estadoBotao);
  delay(100);
  digitalWrite(0, LOW);

  digitalWrite(1,estadoBotao);
  delay(120);
  digitalWrite(1, LOW);

  digitalWrite(2,estadoBotao);
  delay(140);
  digitalWrite(2, LOW);

 

  }
