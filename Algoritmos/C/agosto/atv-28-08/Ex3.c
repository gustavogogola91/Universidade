#include <stdio.h>

int main () {
	
	int A, B, aux;
	
	printf("Digite um numero: ");
	scanf("%i", &A);
	
	printf("Digite outro numero: ");
	scanf("%i", &B);
	
	if (A == B) {
		aux = 0;
	} else if (A > B) {
		aux = A % B;
	} else {
		aux = B % A;
	};
	printf("%i\n", aux);
	
	if (aux == 0) {
		printf("Sao multiplos!");
	} else {
		printf("Nao sao multiplos!");
	}
	
	return 0;
} 
