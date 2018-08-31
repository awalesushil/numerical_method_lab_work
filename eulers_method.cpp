#include <stdio.h>
#include <conio.h>

float f(float x, float y) {
	return ((y*y - x*x)/(y*y+x+x));	
}

int main () {
	
	float x = 0, y = 1, h = 0.2, xn = 0.4;
	
	while (x < xn) {
		
		y = y + h * f(x,y); 
		
		x = x + h;
		
		printf ("Value of y %f for x = %f \n", y, x);
	
	}
	
	getch();
}
