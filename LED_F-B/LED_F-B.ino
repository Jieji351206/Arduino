int LED[]={12,15,2,17};
int x;

void setup() {
  Serial.begin(9600);
  pinMode(LED[0], OUTPUT);
  pinMode(LED[1], OUTPUT);
  pinMode(LED[2], OUTPUT);
  pinMode(LED[3], OUTPUT); 

}

void loop() {
 for(x=0;  x<=3; x++){
    digitalWrite(LED[x],LOW);      //LED[x] ติด x คือ Index ของ Array
    delay(100);
    digitalWrite(LED[x],HIGH);     //LED[x] ดับ
    delay(100);
  }

 for(x=3;  x>=0; x--){
    digitalWrite(LED[x],LOW);      //LED[x] ติด x คือ Index ของ Array
    delay(100);
    digitalWrite(LED[x],HIGH);     //LED[x] ดับ
    delay(100);
  }
  
}
