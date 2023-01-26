#include <analogWrite.h>
int iot = 12;

void setup() {
  pinMode(iot,OUTPUT);

}

void loop() {
  for (int x = 0; x < 255; x++){
  analogWrite(iot,x);         //0-255
  delay(10);
  Serial.println(x);
 }
  delay(10);
  for (int x = 255; x > 0; x--) {
    analogWrite(iot, x);
    delay(10);
    Serial.println(x);
  }
  delay(10);
}
