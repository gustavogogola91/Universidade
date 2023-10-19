#include <stdio.h>

int main () {
	
	int entrada, cont, soma;
	float media;
	
	do {
		printf("Digite um numero (0 para finalizar): ");
		scanf("%d", &entrada);
		
		if (entrada <= 0){
			break;
		}
		soma += entrada;
		cont++;
		
	} while(1);
	
	media = soma / cont;
	
	printf("Media: %.2f", media);
	
	
	return 0;
}
