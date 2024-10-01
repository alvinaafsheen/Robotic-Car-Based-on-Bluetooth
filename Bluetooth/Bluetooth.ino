#include<SoftwareSerial.h>

SoftwareSerial Myserial(7,8);

char t;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Myserial.begin(9600);
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(9,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  if(Myserial.available()){

    t = Myserial.read();
    Serial.write(t);
    if(t == 'f'){
  digitalWrite(3,1);
  digitalWrite(5,0);
  digitalWrite(6,1);
  digitalWrite(9,0);

  delay(5000);
    }

    
  if(t == 'b'){
  digitalWrite(3,0);
  digitalWrite(5,1);
  digitalWrite(6,0);
  digitalWrite(9,1);

  }

  if(t == 'l'){
  digitalWrite(3,1);
  digitalWrite(5,0);
  digitalWrite(6,0);
  digitalWrite(9,0);

  }

    if(t == 'r'){
  digitalWrite(3,0);
  digitalWrite(5,0);
  digitalWrite(6,1);
  digitalWrite(9,0);

    }

    if(t == 's'){
  digitalWrite(3,0);
  digitalWrite(5,0);
  digitalWrite(6,0);
  digitalWrite(9,0);
    }

  }

  
}