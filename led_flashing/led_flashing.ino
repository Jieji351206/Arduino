int iot = 12;

void setup() {

  Serial.begin(9600);
  pinMode(iot, OUTPUT);
  for (int i=1;  i<=20; i++  ) {
    Serial.println(i);
    digitalWrite(iot, LOW);                                   //ให้ LED ติด
    delay(1000);                                              //หน่วงเวลา 1วินาที
    digitalWrite(iot, HIGH);                                  //ให้ LED ดับ
    delay(1000);                                              //หน่วงเวลา 1วินาที
  }
}

void loop() {

}
