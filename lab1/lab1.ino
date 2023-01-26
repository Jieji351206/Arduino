int led1 = 17 ; //ตัวแปร
int led2 = 2  ; 
int led3 = 15 ;
int led4 = 12 ;

void setup() {
  pinMode (led1,OUTPUT);
  pinMode (led2,OUTPUT);
  pinMode (led3,OUTPUT);
  pinMode (led4,OUTPUT);
  
}
void loop() {
  digitalWrite (led1,HIGH);
  delay (700);
  digitalWrite (led1,LOW);
  delay (500);

  digitalWrite (led2,HIGH);
  delay (700);
  digitalWrite (led2,LOW);
  delay (500);

  digitalWrite (led3,HIGH);
  delay (700);
  digitalWrite (led3,LOW);
  delay (500);

  digitalWrite (led4,HIGH);
  delay (700);
  digitalWrite (led4,LOW);
  delay (500);

}
