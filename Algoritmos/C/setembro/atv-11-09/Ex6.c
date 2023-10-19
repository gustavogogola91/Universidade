#include <stdio.h>

int main () {
	
	int entrada, min, max;
	entrada = min = max = 0;
	
	do {
		printf("Digite um numero positivo (digite 0 para parar): ");
		scanf("%d", &entrada);
		
		if (entrada > 0 && min == 0) {
			min = entrada;
		} else if (entrada != 0 && entrada < min) {
			min = entrada;
		}
		
		if (entrada > 0 && max == 0) {
			max = entrada;
		} else if (entrada != 0 && entrada > max) {
			max = entrada;
		}
		
		if (entrada < 0) {
			printf("ERROR: os numeros devem ser positivos");
		}
		
		if (entrada == 0) {
			printf("O maior numero digitado foi %d e o menor %d.", max, min);
			break;
		}
	} while (1);
	
	
	
	return 0;
}

