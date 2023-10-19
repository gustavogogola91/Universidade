#include <stdio.h>
#include <time.h>

int main () {
	srand(time(NULL));
	
	int arr[10][15], sum = 0, sum_col = 0, l, c;
	
	for(l = 0; l < 10; l++) {
		for(c = 0; c < 15; c++) {
			arr[l][c] = rand() % 21;
		}
	}
	
	for(l = 0; l < 10; l++) {
		for(c = 0; c < 15; c++) {
			sum += arr[l][c];
		}
		if(sum % 2 == 0){
			printf("A soma dos elementos da linha %d eh par", l);
		} else {
			printf("A soma dos elementos da linha %d eh impar", l);
		}
		sum = 0;
	}
	
	for(c = 0; c < 15; c++) {
		for(l = 0; l < 15; l++) {
			sum_col += arr[l][c];
		}
		if(sum_col % 2 == 0){
			printf("A soma dos elementos da coluna %d eh par", c);
		} else {
			printf("A soma dos elementos da coluna %d eh impar", c);
		}
		sum_col = 0;
	}
	
	return 0;
}
