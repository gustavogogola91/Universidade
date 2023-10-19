#include <stdio.h>
#include <time.h>

int main () {
	
	srand(time(NULL));
	
	int arr[4][4], transposta[4][4], l, c;
	
	for(l = 0; l < 4; l++) {
		for(c = 0; c < 4; c++){
			arr[l][c] = rand() % 20;
		}
	}
	
	for(l = 0; l < 4; l++) {
		for(c = 0; c < 4; c++){
			transposta[l][c] = arr[c][l];
		}
	}
	
	
	for(l = 0; l < 4; l++) {
		for(c = 0; c < 4; c++){
			printf("%d  ", arr[l][c]);
		}
		printf("\n");
	}
	printf("\n");
	printf("\n");printf("\n");
	printf("\n");
	for(l = 0; l < 4; l++) {
		for(c = 0; c < 4; c++){
			printf("%d  ", transposta[l][c]);
		}
		printf("\n");
	}
	
	
	return 0;
}
