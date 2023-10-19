#include <stdio.h>

int main () {
	
	int arr_input[10], i;
	float arr[10], aux;
	
	for(i = 0; i < 10; i++) {
		
		do {
			printf("Digite o numero %d: ", i);
			scanf("%d", &arr_input[i]);
		} while (arr_input[i] % 2 != 0 || arr_input[i] < 0);
		
	}
	
	for(i = 0; i < 10; i++) {
		if(i % 2 == 0) {
			arr[i] = arr_input[i] / 2.0;
		} else {
			arr[i] = arr_input[i] * 3.0;
		}
	}
	
	for(i = 0; i < 10; i++) {
		printf("%d  ", arr_input[i]);
	}
	printf("\n");
	
	for(i = 0; i < 10; i++) {
		printf("%.2f  ", arr[i]);
	}
	
	return 0;
}
