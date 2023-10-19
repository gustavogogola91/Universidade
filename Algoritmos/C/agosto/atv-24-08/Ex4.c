#include <stdio.h>

int main () {
	
	float valor, valor_final, valor_parcela;
	int aux;
	
	printf("Digite o valor a ser pago: R$ ");
	scanf("%f", &valor);
	
	printf("Selecione a forma de pagamento: \n- (1) Pagamento a vista\n- (2) Pagamento parcelado em 2 vezes com 10\%% de acrescimo\n- (3) Pagamento parcelado em 3 vezes com 20\%% de acrescimo\n> ");
	scanf("%d", &aux);
	
	switch(aux) {
		case 1:
			printf("Pagamento a vista, totalizando R$ %.2f",valor);
			break;
		case 2:
			valor_final = valor * (1.0 + 1.0/10.0);
			valor_parcela = valor_final / 2.0;
			printf("Pagamento em duas parcelas de R$ %.2f, totalizando R$ %.2f", valor_parcela, valor_final);
			break;
		case 3:
			valor_final = valor * (1.0+ 2.0/10.0);
			valor_parcela = valor_final / 3.0;
			printf("Pagamento em tres parcelas de R$ %.2f, totalizando R$ %.2f", valor_parcela, valor_final);
			break;
		default:
			printf("Opcao nao encontrada!");
			break;
	};
	
	return 0;
}
