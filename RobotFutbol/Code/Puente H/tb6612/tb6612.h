class motor
{
	public:
	motor(int A, int B, int PWM)
	{
		pin_A = A;
pin_B = B;
pin_PWM = PWM;
vel = 0;
	}

private:
	int pin_A;
	int pin_B;
	int pin_PWM;
	int vel;

}
