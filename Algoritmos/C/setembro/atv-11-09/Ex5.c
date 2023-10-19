#include <stdio.h> 

int main () {
	
	int num1, num2, aux;
	
	printf("Digite um numero: ");
	scanf("%d", &num1);
	
	printf("Digite outro valor: ");
	scanf("%d", &num2);
	if (num1< num2) {
		aux = num1;
		num1 = num2;
		num2 = aux;
	}
    do {
    	
        aux = num1 % num2;
        num1 = num2;
        num2 = aux;
    } while (num2 != 0);
	
	printf("O MDC eh: %d", num1);
	
	return 0;
}
