#include <stdio.h>

int main() {
	
	int arr[5][5], input, l, c, cont;
	
	for(l = 0; l < 5; l++) {
		for(c = 0; c < 5; c++) {
			printf("Digite um valor para a posicao %d %d: ", l, c);
			scanf("%d", &arr[l][c]);
		}
	}
	
	printf("Digite um numero: ");
	scanf("%d", &input);
	
	for(l = 0;l < 5; l++) {
		for(c = 0; c < 5; c++) {
			if(arr[l][c] % input == 0){
				cont++;
			}
		}
	}
	
	printf("Existem %d multiplos de %d na matriz", cont, input);
	
	return 0;
}
