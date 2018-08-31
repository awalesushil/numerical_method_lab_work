#include <stdio.h>
#include <conio.h>

float f (float x, float y) {
	return ((y * y - x * x)/(y * y + x * x));
}

int main() {
	float x0 = 0, y0 = 1, h = 0.2, xn = 0.4, k1, k2, k3, k4, sum = 0;
	float x = x0, y = y0;
	
	while (x < xn) {
		
		k1 = h * f(x, y);
		k2 = h * f((x + h/2.0), (y + k1 * h/2.0));
		k3 = h * f((x + h/2.0), (y + k2 * h/2.0));
		k4 = h * f((x + h), (y + k3 * h));
		
		sum = (k1 + 2 * k2 + 2 * k3 + k4)/6;
		x = x + h;
		y = y + sum;
		
		printf ("Value of y = %f, for x = %f \n", y, x);
	}
	
	getch();
}


