#include <stdio.h>

int main () {
	
	float valor_divida, juros_mes, acrescimo, divida;
	
	printf("Digite o valor da divida : R$ ");
	scanf("%f", &valor_divida);
	
	printf("Digite o valor dos juros: ");
	scanf("%f", &juros_mes);
	
	acrescimo = valor_divida * juros_mes;
	divida = valor_divida + acrescimo;
	
	printf("No proximo mes a multa sera de %.2f, resultando em um valor final de %.2f", acrescimo, divida);
	
	return 0;
}
