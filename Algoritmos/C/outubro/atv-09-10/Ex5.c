#include <stdio.h>
#include <time.h>

int main() {
	srand(time(NULL));
	
	float arr[5][5], sum = 0;
	int l, c, i;
	
	for(l = 0; l < 5; l++) {
		for(c = 0; c < 5; c++) {
			arr[l][c] = rand() % 21;
		}
	}
	
	for(i = 0; i < 5; i++) {	
		sum += arr[i][i];
	}
	
	printf("Soma da diagonal = %.2f", sum);
}
