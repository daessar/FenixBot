#include "TB6612.h"

Motor::Motor(byte pin1, byte pin2, byte pin3)
{
 PWM_pin = pin1;
 FWD_pin = pin2;
 REV_pin = pin3;
 pinMode(PWM_pin, OUTPUT);
 pinMode(FWD_pin, OUTPUT);
 pinMode(REV_pin, OUTPUT);
 speed = 0;
}

void Motor::SetSpeed(int n_spd)
{
	speed = n_spd;
	if (speed > 0)
	{
		digitalWrite(FWD_pin, HIGH);
		digitalWrite(REV_pin, LOW);
	} 
	else
	{
		if(speed < 0)
		{
			speed = -speed;
			digitalWrite(FWD_pin, LOW);
			digitalWrite(REV_pin, HIGH);
		}
		else
		{
			speed = 0;
			digitalWrite(FWD_pin, LOW);
			digitalWrite(REV_pin, LOW);		
		}
	}
if(speed > 255)
{
	speed = 255;
}
	analogWrite(PWM_pin, speed);
}

int Motor::GetSpeed()
{
 return speed;
}
