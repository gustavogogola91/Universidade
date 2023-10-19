#include <stdio.h>

int main () {
	
	float valor_produto, valor_desconto, valor_final;
	
	printf("Digite o valor do produto: R$ ");
	scanf("%f", &valor_produto);
	
	printf("Digite o valor do desconto: R$ ");
	scanf("%f", &valor_desconto);
	
	valor_final = valor_produto - valor_desconto;
	
	printf("O valor final será de: R$ %.2f", valor_final);
	
	return 0;
}
