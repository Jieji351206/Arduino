int bt =  17;
int wifi = 2;
int ntp = 15;
int iot = 12;
int LDR = 36;

void setup() {
  Serial.begin(9600);
  pinMode(bt,OUTPUT);
  pinMode(wifi,OUTPUT);
  pinMode(ntp,OUTPUT);
  pinMode(iot,OUTPUT);
  pinMode(LDR,INPUT_PULLUP);
  digitalWrite(iot,HIGH);
  digitalWrite(ntp,HIGH);
  digitalWrite(wifi,HIGH);
  digitalWrite(bt,HIGH);
}

void loop() {
  Serial.println(analogRead(LDR));
  
  int val = map(analogRead(LDR),600,900,1,4);
  if(val == 1){
    digitalWrite(iot,LOW);
    digitalWrite(ntp,HIGH);
    digitalWrite(wifi,HIGH);
    digitalWrite(bt,HIGH);
  }else if (val == 2){
    digitalWrite(iot,LOW);
    digitalWrite(ntp,LOW);
    digitalWrite(wifi,HIGH);
    digitalWrite(bt,HIGH);
  }else if (val == 3){
    digitalWrite(iot,LOW);
    digitalWrite(ntp,LOW);
    digitalWrite(wifi,LOW);
    digitalWrite(bt,HIGH);
  }else if (val == 4){
    digitalWrite(iot,LOW);
    digitalWrite(ntp,LOW);
    digitalWrite(wifi,LOW);
    digitalWrite(bt,LOW);
  }else{
    digitalWrite(iot,HIGH);
    digitalWrite(ntp,HIGH);
    digitalWrite(wifi,HIGH);
    digitalWrite(bt,HIGH);
  }

  delay(10);

}
