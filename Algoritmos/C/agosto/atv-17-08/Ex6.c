#include <stdio.h>

#define TAXA_SERVICO 0.1

int main () {
	
	float valor_gasto, valor_taxa, valor_total;
	
	printf("Digite o valor gasto: ");
	scanf("%f", &valor_gasto);
	
	valor_taxa = valor_gasto * TAXA_SERVICO;
	
	valor_total = valor_gasto + valor_taxa;
	
	printf(" Valor gasto: %.2f \n Valor taxa de servico: %.2f \n ___________________________ \n Valor total: %.2f", valor_gasto, valor_taxa, valor_total);
	
	return 0;
}
