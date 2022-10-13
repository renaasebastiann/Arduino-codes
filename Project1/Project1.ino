#include<Servo.h>
Servo Myservo;
int pos;
const int echoPin=2;
const int trigPin=4;
long duration;
int distance;
const int LED=13;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
  Myservo.attach(3);
}

void loop() {
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  delayMicroseconds(10);
  duration=pulseIn(echoPin,HIGH);
  distance= duration*0.034/2;
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println("cm");
  if (distance<20)
  { digitalWrite(LED, HIGH);
  delayMicroseconds(50);
  digitalWrite(LED, LOW);
  delayMicroseconds(10);
  for(pos=0;pos<=150;pos++){
    Myservo.write(pos);
    delay(10);
  }}
  else 
  {digitalWrite(LED, LOW);
  for(pos=150;pos>=0;pos--){
    Myservo.write(pos);
    delay(10);
  delay(10);
  }}}
