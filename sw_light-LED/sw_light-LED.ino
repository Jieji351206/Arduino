int bt =  17;
int wifi = 2;
int ntp = 15;
int iot = 12;
const int sw1 = 16;
const int sw2 = 14;

void setup() {
   pinMode(bt,OUTPUT);
   pinMode(wifi,OUTPUT);
   pinMode(ntp,OUTPUT);
   pinMode(iot,OUTPUT);
   pinMode(sw1,INPUT_PULLUP);
   pinMode(sw2,INPUT_PULLUP);
   digitalWrite(bt,HIGH);
   digitalWrite(wifi,HIGH);
   digitalWrite(ntp,HIGH);
   digitalWrite(iot,HIGH);
   Serial.begin(9600);

}

void loop() {
  Serial.begin(9600);
  if(digitalRead(sw1)==LOW){
    LED();
  }else if(digitalRead(sw2)==LOW){
    light();
  }else{
    Stop();
  }

}
