int taquito = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  //taquito = taquito + 1;
  taquito = random(0,10);
  Serial.println(taquito);
  //el arduino espera 1 segundo
  delay(1000);
  //de las clases mas usadas en aurduino, pausa el programa, no se manda ni se recibe en milisegundos
}
