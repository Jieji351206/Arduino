void ntpblink(int value1,int value2){        //รับค่าเข้า ไม่ส่งค่าออก
  digitalWrite(ntp,LOW);
  delay(value1); 
  digitalWrite(ntp,HIGH);
  delay(value2); 
}
