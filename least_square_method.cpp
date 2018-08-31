#include <stdio.h>
#include <conio.h>


int main () {

	float m, c;
	int sumx = 0, sumy = 0, sumxy = 0, sumx2 = 0;
	int x[4] = {1, 2, 3, 4}, y[4] = {1, 2, 3, 4};
	int n = 4;
	
	for (int count = 0; count < n; count++) {
		sumx += x[count];
		sumy += y[count];
		sumxy += (x[count] * y[count]);
		sumx2 += (x[count] * x[count]);
	}
	
	m = ((n * sumxy) - (sumx * sumy)) / ((n * sumx2) - (sumx * sumx));
	c = ((sumx2 * sumy) - (sumxy * sumx)) / ((n * sumx2) - (sumx * sumx));
	
	printf ("y = %fx + %f", m , c);
	
	getch();
}
