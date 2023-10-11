#include <stdio.h>

// define boolean type 
#define TRUE 1;
#define FALSE 0;

// structure
typedef struct Motors {
	/*
    opening_high_speed === ohs
    opening_low_speed === ols
    closing_high_speed === chs
    closing_low_speed === cls
    pedestrian === pd
	*/
    int ohs, ols, chs,cls, pd, tp; // structure members
} Motor;



// function declaration
void printMotor(Motor motor);

int main() {
	
	// with usage of typedef Instead of struct Motors motor We write Motor motor
    Motor m1;
	
    m1.ohs = 15;
    m1.ols = 7;
    m1.chs = 15;
    m1.cls = 7;
    m1.pd = 7;
    m1.tp = 5;
	
	//function call
	printMotor(m1);

    return 0;
}

// function definition
void printMotor(Motor motor) {
	printf("Opening High Speed is %d seconds.\n", motor.ohs);
	printf("Opening Low Speed is %d seconds.\n", motor.ols);
	printf("Closing High Speed is %d seconds.\n", motor.chs);
	printf("Closing Low Speed is %d seconds.\n", motor.cls);
	printf("Pedestrian is %d seconds.\n", motor.pd);
	printf("Time delay is %d seconds.", motor.tp);
}
