#include <analogWrite.h>
int ntp = 15;
int LDR = 36;


void setup() {
  Serial.begin(9600);
  pinMode(ntp,OUTPUT);
  pinMode(LDR,INPUT_PULLUP);

}

void loop() {
  int val = map(analogRead(36),0,1024,0,100);
  Serial.println(val);
  digitalWrite(ntp,val);
  

}
