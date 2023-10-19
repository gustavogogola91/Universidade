#include <stdio.h>
#include <time.h>

int main() {
	
	int arr[4][4], mult = 1, l, c, i;
	srand( (unsigned)time(NULL) );
	
	for(l = 0; l < 4; l++) {
		for(c = 0; c < 4; c++) {
			arr[l][c] = 1 + (rand() % 10);
		}
	}
	
	printf("Matriz:\n");
	for(l = 0; l < 4; l++) {
		for(c = 0; c < 4; c++) {
			printf("%d   ", arr[l][c]);
		}
		printf("\n");
	}
	
	for(i = 0; i < 4; i++) {
		mult *= arr[i][i];
	}
	
	printf("Multiplicacao da diagonal principal: %d", mult);
	return 0;
}
