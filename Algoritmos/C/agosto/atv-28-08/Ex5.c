#include <stdio.h>

int main () {
	
	int D;
	
	printf("Digite a distancia do lancamento: ");
	scanf("%i", &D);
	
	if (D < 0 || D > 2000) {
		printf("Valor invalido!");
	} else if (D <= 800){
		printf("Cesta de 1 ponto!");
	} else if (D <= 1400) {
		printf("Cesta de 2 pontos!");
	} else if (D <= 2000) {
		printf("Cesta de 3 pontos!");
	} else {
	
	}
	
	return 0;
}
