int luz = A0;
int lumin = 0;
int tierra = A1;
int humedad = 0;

void setup() {
  // put your setup code here, to run once:
  //Puerto serial
  Serial.begin(9600);
}

void loop() {
  lumin = analogRead(A0);
  humedad = analogRead(A1);
  Serial.print("brightness_lv: ");
  Serial.println(lumin);//entre mas alto mas luz
  Serial.print("humidity_lv: ");
  Serial.println(humedad);//entre mas bajo mas humedad
  Serial.println("");
  delay(100);
  // put your main code here, to run repeatedly:
}
