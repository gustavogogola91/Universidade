#include <stdio.h>

int main () {
	
	int altura, largura;
	
	printf("Insira a altura do abdomem(em cm): ");
	scanf("%i", &altura);
	
	printf("Insira a largura do abdomem(em cm): ");
	scanf("%i", &largura);
	
	printf("Tamanho recomendado: ");
	
	if (altura > 75 || largura > 59) {
		printf("GG");
	} else if (altura > 72 || largura > 56) {
		printf("G");
	} else if (altura > 70 || largura > 53) {
		printf("M");
	} else if (altura > 68 || largura > 50) {
		printf("P");
	} else {
		printf("PP");
	};
	
}
