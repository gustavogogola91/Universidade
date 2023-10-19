#include <stdio.h>

int main () {
	
	int A, B, result;
	
	printf("Digite um numero: ");
	scanf("%i", &A);
	
	printf("Digite outro valor: ");
	scanf("%i", &B);
	
	result = A * B;
	
	if (result == 0) {
		printf("A multiplicacao destes dois valores resulta em um numero nulo.");
	} else if (result > 0) {
		printf("A multiplicacao destes dois valores resulta em um numero positivo.");
	} else {
		printf("A multipicacao destes dois valores resulta em um numero negativo.");
	};
	
	return 0;
}
