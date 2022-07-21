int luz = A0;
int luminosidad = 0;

void setup() {
  //enciende el puerto serial
   Serial.begin(9600);
}

void loop() {
   luminosidad = analogRead(A0);
   Serial.println(luminosidad);
   delay(100);
}
