#include <stdio.h>

int main () {
	
	int qtd, codigo;
	float valor_final;
	
	printf("Digite o codigo do produto: ");
	scanf("%i", &codigo);
	
	printf("Digite a quantidade: ");
	scanf("%i", &qtd);
	
	printf("------------------\n");
	
	switch (codigo) {
		case 1:
			valor_final = qtd * 12.00;
			printf("Produto: Cachorro-quente\nQtd: %i\nValor Unit: R$ 12,00\nValor total: %.2f", qtd, valor_final);
			break;
		case 2:
			valor_final = qtd * 15.50;
			printf("Produto: X-salada\nQtd: %i\n Valor Unit: R$ 15,50\nValor total: %.2f", qtd, valor_final);
			break;
		case 3:
			valor_final = qtd * 18.00;
			printf("Produto: X-bacon\nQtd: %i\n Valor Unit: R$ 18,00\nValor total: %.2f", qtd, valor_final);
			break;
		case 4:
			valor_final = qtd * 8.00;
			printf("Produto: Torrada simples\nQtd: %i\n Valor Unit: R$ 8,00\nValor total: %.2f", qtd, valor_final);
			break;
		case 5:
			valor_final = qtd * 4.50;
			printf("Produto: Refrigerante\nQtd: %i\n Valor Unit: R$ 4,50\nValor total: %.2f", qtd, valor_final);
			break;
		default:
			printf("Codigo nao encontrado!");
			break;
	}
	

	
	return 0;
}
