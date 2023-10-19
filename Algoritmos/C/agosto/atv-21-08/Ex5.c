#include <stdio.h>

int main () {
	
	float valor, porcentagem, valor_final;
	
	printf("Digite o valor da compra: R$ ");
	scanf("%f", &valor);
	
	if (valor >= 500.00) {
		porcentagem = 15.0;
	} else if (valor >= 200.0) {
		porcentagem = 10.0;
	} else {
		porcentagem = 5.0;
	};
	
	valor_final = valor * (1 - porcentagem / 100);
	
	printf("O valor de R$ %.2f recebe um desconto de %.0f \%%, resultando em um valor de R$ %.2f.", valor, porcentagem, valor_final);
	
	return 0;
}
