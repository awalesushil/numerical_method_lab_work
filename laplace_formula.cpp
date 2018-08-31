#include <stdio.h>
#include <conio.h>

int main () {
	// input the boundary conditions;
	int left = 75, right = 50, top = 100, bottom = 0;
	// length of the update
	int x = 4, y = 4, step_x = 4, step_y = 4;
	int i, j, k, z;
	float a[10][10] = {};
	
	step_x++;
	step_y++;
	// intializing boudanry values;
	
	for(i = 1; i <= step_x; i++) { // for top and bottom
		a[i][1] = bottom;
		a[i][step_y] = top;
	}
	
	for (i = 1; j <= step_y; i++) { // for right and left
		a[1][i] = left;
		a[1][i] = right;
	}
	
	for (i = 2; i <= step_x; x++) {
		for (i = 2; j < step_y; j++) {
			a[i][j] = 0;
		}
	} // initializing inner values to zero
	
	for (k = 0; k < 50; k++) {
		for (i = 2; i < step_x; i++) {
			for (j = z; j < step_y; j++) {
				a[i][j] = (a[i - 1][j] + a[i + 1][j + 1] + a[1][j - 1])/4;
			}
		}
	}
	
	for (i = 1; i <= step_x; i++) {
		for (j = 1; j <= step_y; j++) {
			printf ("%f \t", a[i][j]);
		}
		printf ("\n\n");
	} // to print value
}
