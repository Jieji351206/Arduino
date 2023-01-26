int s1 = 16;
int s2 = 14;
int LED1 = 15;
int LED2 = 12;

void setup() {
  // put your setup code here, to run once:
pinMode(s1,INPUT);
pinMode(s2,INPUT);
pinMode(LED1,OUTPUT);
pinMode(LED2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int sensor1 = digitalRead(s1);
int sensor2 = digitalRead(s2);
if(sensor1 == HIGH) {
  digitalWrite(LED1,HIGH);
 }else if (sensor2 == HIGH) {
  digitalWrite(LED2,HIGH);
 }else{
   digitalWrite(LED1,LOW);
   digitalWrite(LED2,LOW);
 }
}
