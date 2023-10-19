#include <stdio.h>

int main () {
	
	int positivo, negativo, entrada;
	positivo = negativo = entrada = 0;
	
	do {
		printf("Digite um numero: ");
		scanf("%d", &entrada);
		
		if (entrada == 0) {
			break;
		} else if (entrada > 0) {
			positivo += entrada;
		} else {
			negativo += entrada;
		}
	} while (entrada != 0);
	
	printf("Soma dos numeros positivos: %d\nSoma dos numeros negativos: %d", positivo, negativo);
	return 0;
}
