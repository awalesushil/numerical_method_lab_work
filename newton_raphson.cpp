#include <stdio.h>
#include <conio.h>
#include <math.h>

float functional_value(float value) {
	return (pow(value, 2) - 2 * value - 2);
}

float derivative_functional_value (float value) {
	return (2 * value - 2);
}

int main () {
	
	float value = 3, new_value, error;
	
	do {
		
		new_value = value - (functional_value(value)/derivative_functional_value(value));
		
		error = new_value - value;
		
		value = new_value;
		
	} while (fabs(error) > 0.005);
	
	printf ("Value = %f", new_value);
	
	getch();
}



