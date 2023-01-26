int iot = 12;
int ntp = 15;
int wifi = 2;


void setup() {
 pinMode (iot,OUTPUT);
 pinMode (ntp,OUTPUT);
 pinMode (wifi,OUTPUT);

}

void loop() {
  iotblink();
  ntpblink(1000,100);
  digitalWrite(wifi,LOW);
  delay(wifiblink(100));
  digitalWrite(wifi,HIGH);
  delay(wifiblink(10));
}
