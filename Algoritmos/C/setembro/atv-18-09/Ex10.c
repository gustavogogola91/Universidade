#include <stdio.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	int num_carteira, mais_mult = 0, num_mult, num_total_mult, i, k;
	float valor_mult, total_arrecadado;
	
	for(i=1; i <= 4327; i++){
		printf("Carteira número %d.\n", i);	
		printf("Digite o número de multas: ");
		scanf("%d", &num_mult);
		
		if(mais_mult == 0){
			mais_mult = i;
		} else if(num_mult > mais_mult){
			mais_mult = i	;
		}
		
		num_total_mult += num_mult;
		
		for(k=1; k <= num_mult; k++){
			printf("Digite o valor da multa número %d: ", k);
			scanf("%f", &valor_mult);
			
			total_arrecadado += valor_mult;
		}

	}
	
	printf("Foram distribuídas %d multas, arrecadamdo um total de: R$ %.2f\n",num_total_mult, total_arrecadado);
	printf("O motorista que mais recebeu multas foi o: %d", mais_mult);
	return 0;
}
