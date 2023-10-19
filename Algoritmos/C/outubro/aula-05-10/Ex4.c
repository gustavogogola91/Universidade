#include <stdio.h>
#include <time.h>

int main() {
	
	int arr[3][4],sum[3] = {0, 0, 0}, mult[4] = {1, 1, 1 ,1}, l, c, i;
	srand( (unsigned)time(NULL) );
	
	for(l = 0; l < 3; l++) {
		for(c = 0; c < 4; c++) {
			arr[l][c] = 1 + (rand() % 10);
		}
	}
	
	printf("Matriz:\n");
	for(l = 0; l < 3; l++) {
		for(c = 0; c < 4; c++) {
			printf("%d   ", arr[l][c]);
		}
		printf("\n");
	}
	
	for(l = 0; l < 3; l++) {
		for(c = 0; c < 4; c++) {
			sum[l] += arr[l][c];
		}
	}
	
	for(c = 0; c < 4; c++) {
		for(l = 0; l < 3; l++) {
			mult[c] *= arr[l][c] ;
		}
	}
	
	printf("Soma das linhas: ");
	for(i = 0; i < 3; i++){
		printf("%d  ", sum[i]);
	}
	
	printf("Multiplicacao das colunas: ");
	for(i = 0; i < 4; i++){
		printf("%d  ", mult[i]);
	}
	
	return 0;
}
