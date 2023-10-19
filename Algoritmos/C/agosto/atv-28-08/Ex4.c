#include <stdio.h>



int main () {
	
	int num_folhas = 0;
	float valor_final = 0;
	
	printf("Digite a quantidade de folhas: ");
	scanf("%i", &num_folhas);
	
	if (num_folhas > 100) {
		valor_final += 25.0;
		num_folhas -= 100;
		valor_final += num_folhas * 0.20;
	} else {
		valor_final = num_folhas * 0.25;
	};
	
	printf("Valor final: R$ %.2f", valor_final);
	
	return 0;
}
