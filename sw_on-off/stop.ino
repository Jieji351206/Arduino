void stop1(){         //0000
  digitalWrite(bt,LOW);
  digitalWrite(wifi,LOW);
  digitalWrite(ntp,LOW);
  digitalWrite(iot,LOW);
}

void Stop(){         //1111
  digitalWrite(bt,HIGH);
  digitalWrite(wifi,HIGH);
  digitalWrite(ntp,HIGH);
  digitalWrite(iot,HIGH);
}
