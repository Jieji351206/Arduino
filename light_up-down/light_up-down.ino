int bt =  17;
int wifi = 2;
int ntp = 15;
int iot = 12;

void setup() {
   pinMode(bt,OUTPUT);
   pinMode(wifi,OUTPUT);
   pinMode(ntp,OUTPUT);
   pinMode(iot,OUTPUT);
   Serial.begin(9600);

}

void loop() {
   Serial.begin(9600);
   for (int x = 0; x < 255; x++) {    //ให้วนลูป ทั้งหมด 255 ครั้ง 0-254
    analogWrite(bt, x);               //นำค่า x มาสั่งงานให้หลอดไฟ ค่อยๆสว่าง
    analogWrite(wifi, x);
    analogWrite(ntp, x);
    analogWrite(iot, x);
    delay(10);
    Serial.println(x);
  }
  delay(100);
  for (int x = 255; x > 0; x--) {
    analogWrite(bt, x);
    analogWrite(wifi, x);
    analogWrite(ntp, x);
    analogWrite(iot, x);
    delay(10);
    Serial.println(x);
  }
  delay(100);

}
