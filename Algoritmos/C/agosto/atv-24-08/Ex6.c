#include <stdio.h>

int main () {

	int cod, qtd;
	float valor;
	
	printf("Digite o codigo do pedido: ");
	scanf("%i", &cod);
	
	printf("Digite a quantidade: ");
	scanf("%i", &qtd);
	printf("\n--------------------------------\n");
	
	switch(cod) {
		case 1:
			valor = qtd * 12.0;
			printf("Cod: %i\nProduto: Cachorro-quente\nQtd: %i\nPreco: R$ 12,00\nValor final: R$ %.2f\nObrigado por comprar :)",cod ,qtd, valor);
			break;
		case 2:
			valor = qtd * 15.5;
			printf("Cod: %i\nProduto: X-salada\nQtd: %i\nPreco: R$ 15,50\nValor final: R$ %.2f\nObrigado por comprar :)",cod ,qtd, valor);
			break;
		case 3:
			valor = qtd * 18.0;
			printf("Cod: %i\nProduto: X-bacon\nQtd: %i\nPreco: R$ 18,00\nValor final: R$ %.2f\nObrigado por comprar :)",cod ,qtd, valor);
			break;
		case 4:
			valor = qtd * 8.0;
			printf("Cod: %i\nProduto: Torrada simples\nQtd: %i\nPreco: R$ 8,00\nValor final: R$ %.2f\nObrigado por comprar :)",cod ,qtd, valor);
			break;
		case 5:
			valor = qtd * 4.5;
			printf("Cod: %i\nProduto: Refrigerante\nQtd: %i\nPreco: R$ 4,50\nValor final: R$ %.2f\nObrigado por comprar :)",cod ,qtd, valor);
			break;
		default:
			printf("Codigo inxistente!");
			break;
	};
	printf("\n--------------------------------");

	return 0;
}
