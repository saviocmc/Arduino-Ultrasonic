#include "Ultrasonic.h"

Ultrasonic ultrasonic(12,13);

void setup()
{
	Serial.begin(9600);
	Serial.println("HC-SR4 testing..");
	delay(1000);
}

void loop()
{
	Serial.print(ultrasonic.getDistance());
	Serial.println("mm");
	delay(500);
}
