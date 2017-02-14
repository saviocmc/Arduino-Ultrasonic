#include "Arduino.h"
#include "Ultrasonic.h"

Ultrasonic::Ultrasonic(byte trigPin, byte echoPin)
{
   pinMode(trigPin,OUTPUT);
   pinMode(echoPin,INPUT);
   this->trigPin = trigPin;
   this->echoPin = echoPin;
}

long Ultrasonic::getTime()
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  return pulseIn(echoPin,HIGH);
}

long Ultrasonic::getDistance()
{
  return this->getTime()/5.8L;
}