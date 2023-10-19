#include <stdio.h>

int main() {
	int arr[11][11], l, c;
	
	for(l = 0; l < 11; l++) {
		for(c = 0; c < 11; c++) {
			arr[l][c] = l * c;
		}
	}
	
	for(l = 0; l < 11; l++) {
		for(c = 0; c < 11; c++) {
			printf("%d X %d = %d   ", l, c, arr[l][c]);
		}
		printf("\n");
	}
	
	return 0;
}
