#include <stdio.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	int num_recibos,i;
	float valor_lote, input, sum_input, diferenca;
	valor_lote = input = sum_input = 0;
	num_recibos = 0;
	
	printf("Digite o número de recibos no lote: ");
	scanf("%d", &num_recibos);
	
	printf("Digite o valor total do lote: ");
	scanf("%f", &valor_lote);
	printf("___________________________________________\n");
	
	for (i = 1; i <= num_recibos; i++) {
		printf("Digite o valor do recibo número %d: ", i);
		scanf("%f", &input);
		
		sum_input += input;
	};
	
	if (valor_lote == sum_input){
		printf("LOTE OK");
	} else {
		diferenca = sum_input - valor_lote;
		if (valor_lote > sum_input) {
			
			printf("Diferença negativa de R$ %.2f", diferenca);
		} else{
			printf("Diferença positiva de %.2f", diferenca);
		}
	}
	
	return 0;
	
}
