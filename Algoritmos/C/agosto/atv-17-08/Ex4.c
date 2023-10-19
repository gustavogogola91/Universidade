#include <stdio.h>

int main () {
	
	float valor_devido, percentual_multa, total_devido;
	int dias_atraso;
	
	printf("Digite o valor devido: ");
	scanf("%f", &valor_devido);
	
	printf("Digite os dias de atraso: ");
	scanf("%d", &dias_atraso);
	
	printf("Digite o percentual de multa: ");
	scanf("%f", &percentual_multa);
	
	total_devido = valor_devido + (valor_devido * percentual_multa * dias_atraso);
	
	printf("O total devido apos a aplicacao da multa eh de %.2f", total_devido);
	
	return 0;
}
