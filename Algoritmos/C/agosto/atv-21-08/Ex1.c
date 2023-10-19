#include <stdio.h>

int main () {
	
	float num1, num2;
	
	printf("Digite um numero: ");
	scanf("%f", &num1);
	
	printf("Digite outro numero: ");
	scanf("%f", &num2);
	
	if (num1 > num2) {
		
		printf("O numero %.0f eh maior que o numero %.0f.", num1, num2);
		
	} else if (num2 > num1) {
	
		printf("O numero %.0f eh maior que o numero %.0f.", num1, num2);
		
	} else if (num1 == num2) {
	
		printf("Os dois valores sao iguais.");
	
	};
	
	return 0;
}
