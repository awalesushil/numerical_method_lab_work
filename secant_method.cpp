#include <stdio.h>
#include <conio.h>
#include <math.h>

float f(float value) {
	return (pow(value, 2) - 2 * value - 2);
}

int main () {
	
	float x0 = 2.0, x1 = 3.0, temp, x2;
	
	if (fabs(f(x0)) < fabs(f(x1))) {
		temp = x0;
		x1 = x0;
		x0 = temp;
	}
	
	do {
		
		x2 = x1 - (f(x1) * ((x0 - x1)/(f(x0)- f(x1))));	
		x0 = x1;
		x1 = x2;
	
	} while (fabs(f(x2)) > 0.005);
	
	printf ("Value = %f", x2);
	
	getch();
}

