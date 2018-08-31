#include <stdio.h>
#include <conio.h>

int main () {
	
	int i , j, value = 9, n = 5;
	
	float x[5] = {5, 7, 11, 13, 17}, y[5] = {150, 392, 1452, 2366, 5262};
	float temp, answer = 0.0;
	
	for (i = 0; i < n; i++) {
		temp = 1.0;
		for (j = 0; j < n; j++){
			if (i != j) {
				temp = temp * ((value - x[j])/(x[i]-x[j])); 
			}
		}
		answer += temp * y[i];
	}
	
	printf ("y(9) = %f", answer);
	
	getch();
}
