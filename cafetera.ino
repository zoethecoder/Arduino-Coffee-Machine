#include <Servo.h>
Servo m1;
int ina = 5;
int inb = 4;
int sensor = 7;
int value;
 
void setup() {
  m1.attach(9);
  pinMode(sensor, INPUT);
  pinMode(ina,OUTPUT);
  pinMode(inb, OUTPUT);
  
  

}

void loop() {


value = digitalRead(sensor);
 
   
    
      
      
    analogWrite(ina,0);
    analogWrite(inb,100);
   
    
    
  

}
