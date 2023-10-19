#include <stdio.h>
#include <time.h>

int main() {
	
	int arr[3][5], sum = 0, l, c;
	srand( (unsigned)time(NULL) );
	
	for(l = 0; l < 3; l++) {
		for(c = 0; c < 5; c++) {
			arr[l][c] = 1 + (rand() % 10);
		}
	}
	printf("Matriz:\n");
	for(l = 0; l < 3; l++) {
		for(c = 0; c < 5; c++) {
			printf("%d   ", arr[l][c]);
		}
		printf("\n");
	}
	
	for(l = 0; l < 3; l++) {
		sum += arr[l][4];
	}
	printf("Soma da ultima coluna: %d", sum);
	
	return 0;
}
