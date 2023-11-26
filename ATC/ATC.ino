// Autonomous Trash Can System
// Created by: Fatih Raka Ksatria


#include <Servo.h>

#define LED_MERAH 13;
#define LED_KUNING 4;
#define LED_HIJAU 11;
Servo myservo;

int angle =0;
int angleStep =50;

void setup() { 
  myservo.attach(8);
  pinMode(2,INPUT_PULLUP);
  pinMode(3,INPUT_PULLUP);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop() {
   
  if (digitalRead(3) == HIGH){
  digitalWrite(7, HIGH); 
  digitalWrite(6, LOW); 
  digitalWrite(5, LOW); 
    
    if (digitalRead(2) == HIGH){
    myservo.write(180);
    digitalWrite(5, LOW); 
    }
    else {
    myservo.write(-180);
    digitalWrite(5, HIGH); 
    delay(3000);
    }
  }

  else {
   digitalWrite(6, HIGH); 
    digitalWrite(7, HIGH); 
    digitalWrite(5, LOW);  
  }
  }