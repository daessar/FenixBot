
#include <arduino.h>

#define FORWARD true
#define REVERSE false

class Motor
{
 private:
   byte PWM_pin;
   byte FWD_pin;
   byte REV_pin;
   int speed;
 public:
   Motor(byte pin1, byte pin2, byte pin3);		//constructor
   void SetSpeed(int n_spd);				//cambiar velocidad
   int GetSpeed();      
};
