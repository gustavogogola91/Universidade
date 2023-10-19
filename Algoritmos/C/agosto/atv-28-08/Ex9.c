#include <stdio.h>

int main () {
	
	int nota;
	
	printf("Digite a nota: ");
	scanf("%i", &nota);
	
	printf("Conceito: ");
	
	if (nota < 0 || nota > 100) {
		printf("Nota invalida");
	} else if (nota == 0) {
		printf("E");
	} else if (nota <= 35) {
		printf("D");
	} else if (nota <= 60) {
		printf("C");
	} else if (nota <= 85) {
		printf("B");
	} else {
		printf("A");
	}
	
	return 0;
}
