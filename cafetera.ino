#include <Servo.h>
Servo m1;
int ina = 5;
int inb = 4;
int sensor = 7;
int value;
int pump = 6;
 
void setup() {
  m1.attach(9);
  pinMode(sensor, INPUT);
  pinMode(ina,OUTPUT);
  pinMode(inb, OUTPUT);
 pinMode(pump, OUTPUT);
  
  

}

void loop() {
 value = digitalRead(sensor);
 if(value==LOW){
 digitalWrite(pump, HIGH);
  delay(6000);
  digtalWrite(pump, LOW); // pours water for an estimated amount of time (in my case it´s 6 seconds, but it can variate)
  m1.write(90); // if sensor is sensing card, servo moves opening a little gate with instant coffee, after 1.5 seconds, it closes
  delay(1500);
  m1.write(0);
    analogWrite(ina,0); // fan module starts stirring the coffee
    analogWrite(inb,100);
  delay(10000);
  analogWrite(ina,0);
  analogWrite(inb,0);
 }
 else{
  m1.write(0);
  analogWrite(ina,0);
  analogWrite(inb,0);
  digitalWrite(pump, LOW);
 }
   
    
    
  

}
