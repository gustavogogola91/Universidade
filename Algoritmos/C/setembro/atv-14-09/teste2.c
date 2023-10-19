#include <stdio.h>

int main () {
	
	int i, num, erro = 0;
	double fatorial = 1;
		
	do {
		printf("Digite um numero para calcularmos o fatorial: [1,170] >>");
		scanf("%d", &num);
		
		if (num < 1 && num < 171) {
			break;
		} 
		
		printf("Por favor digite um valor entre 0 e 170!\n");
		
	} while(1);
	
	for(i = 1; i <= num; i++) {
		fatorial *= i;
		printf("Fatorial de %d eh %g\n", i, fatorial);
	}

	return 0;
}
