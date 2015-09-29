#ifndef Ultrasonic_h
#define Ultrasonic_h

#include "Arduino.h"

class Ultrasonic
{
	byte trigPin;
	byte echoPin;

public:
	Ultrasonic(byte trigPin, byte echoPin);
	long getDistance();
	long getTime();
};

//TODO: See the max alcance of the sensor and set the correspondent timeout.

#endif