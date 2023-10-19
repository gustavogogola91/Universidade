#include <stdio.h>

int main () {
	
	int  num, resto;
	
	printf("Digite um numero inteiro: ");
	scanf("%i", &num);
	
	resto = num % 2;
	
	switch(resto) {
		case 1:
			printf("O numero %d eh impar!", num);
			break;
		case 0:
			printf("O numero %d eh par!", num);
			break;
	}
	
	return 0;
}
