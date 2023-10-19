#include <stdio.h>

int main () {
	
	int DDD;
	
	printf("Digite o DDD: ");
	scanf("%i", &DDD);
	
	if (DDD == 61) {
		printf("Cidade: Brasilia.");
	} else if (DDD == 71) {
		printf("Cidade: Salvador.");
	} else if (DDD == 11) {
		printf("Cidade: Sao Paulo.");
	} else if (DDD == 21) {
		printf("Cidade: Rio de Janeiro.");
	} else if (DDD == 32) {
		printf("Cidade: Juiz de Fora.");
	} else if (DDD == 19) {
		printf("Cidade: Campinas.");
	} else if (DDD == 27) {
		printf("Cidade: Vitoria.");
	} else if (DDD == 31) {
		printf("Cidade: Belo horizonte.");
	} else {
		printf("DDD nao cadatrado.");
	}
	
	return 0;
}
