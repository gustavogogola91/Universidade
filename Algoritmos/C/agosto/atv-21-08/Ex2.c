#include <stdio.h>

int main () {
	
	int N;
	
	printf("Digite um valor inteiro: ");
	scanf("%i", &N);
	
	if (N >= 0) {
		
		printf("O valor digitado foi: %i", N);
		
	} else {
		
		N *= -1;
		
		printf("O valor digitado foi negativo, por isso transformamos ele para positivo \nO valor digitado foi: %i", N);
		
	};
	
	return 0;
}
