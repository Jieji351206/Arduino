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
   forward();                        //เรียกใช้งาน
   delay(1000);
   backward();
   delay(1000);
   Right();
   delay(1000);
   Left();
   delay(1000);
   stop1();
   delay(1000);
   Stop();
   delay(1000);

}
