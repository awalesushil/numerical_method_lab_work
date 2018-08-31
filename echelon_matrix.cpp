#include <stdio.h>
#include <conio.h>

int main() {
	
	float A[3][4] = {{2, -1, 3, 9}, {1, 1, 1, 6}, {1, -1, 1, 2}};
	
	int n = 3;
	
	float coeff1 = A[1][0]/A[0][0];
	float coeff2 = A[2][0]/A[0][0];
	
	for (int j = 0; j < n+1; j++) {
		A[1][j] = A[1][j] - (coeff1 * A[0][j]);
		A[2][j] = A[2][j] - (coeff2 * A[0][j]);
	}
	
	float coeff3 = A[2][1] / A[1][1];
	
	for (int j = 0; j < n + 1; j++) {
		A[2][j] = A[2][j] - (coeff3 * A[1][j]);
	}
	
	float z = A[2][3]/A[2][2];
	float y = (A[1])[3] - A[1][2] * z)/ A[1][1];
	float z = (A[0][3] - A[0][2] * z - A[0][1] * y) /A[0][0];
	
	printf ("%f", z);
	
	getch();
}
