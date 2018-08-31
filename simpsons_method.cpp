#include <stdio.h>
#include <conio.h>

float f(float x);

float f(float x) {
	return (1 / (1 + x));	
}

int main() {
	
	int i = 0, n  = 0;
	
	float x0 = 0, xn = 0, h = 0, x[20] = {}, y[20] = {};
	float sumOdd = 0, sumEven = 0;
	
	printf ("Enter the values of x0 and xn \n");
	scanf ("%f %f", &x0, &xn);
	
	printf("Enter the difference \n");
	scanf("%f", &h);
	
	n = (xn - x0)/h;

	for (i = 0; i <= n; i++) {
		x[i] = x0 + i * h;
		y[i] = f(x[i]);
	}
	
	for (i = 1; i < n; i++) {
		if (i % 2 == 1) {
			sumOdd += y[i];
		} else {
			sumEven += y[i];
		}
	}
	
	float integration = h * ((y[0] + y[n] + 4 * sumOdd + 2 * sumEven)/3);
	
	printf ("Integration value: %f", integration);
	getch();
}
