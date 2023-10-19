#include <stdio.h>

int main () {
	
	int num_jabuti, velocidade, mais_rapido = 0, velocidade_m_rapido, nvl_mais_rapido, i;
	
	do {
		printf("Digite o numero de jabutis: ");
		scanf("%d", &num_jabuti);
		
		if (num_jabuti < 1 || num_jabuti > 100) {
			printf("Por favor digite um valor no intervalo [1,100].\n");
		} else {
			break;
		}
		
	} while (1);
	
	for (i = 1; i <= num_jabuti; i++) {
		do {
			printf("Digite a velocidade do jabuti num %d (em m/h): ", i);
			scanf("%d", &velocidade);
			
			if (velocidade < 1 || velocidade > 500){
				printf("Por favor digite um valor no intervalo [1,500].\n");
			} else {
				if (mais_rapido == 0) {
					mais_rapido = i;
					velocidade_m_rapido = velocidade;
				} else if (velocidade > velocidade_m_rapido) {
					mais_rapido = i;
					velocidade_m_rapido = velocidade;
				}
				break;
			}
			
		} while (1);
	}
	
	if (velocidade_m_rapido < 180) {
		printf("O jabuti mais rapido eh o numero %d, com velocidade %d, sendo classificado no nivel 1.", mais_rapido, velocidade_m_rapido);
	} else if (velocidade_m_rapido < 250) {
		printf("O jabuti mais rapido eh o numero %d, com velocidade %d, sendo classificado no nivel 2.", mais_rapido, velocidade_m_rapido);
	} else {
		printf("O jabuti mais rapido eh o numero %d, com velocidade %d, sendo classificado no nivel 3.", mais_rapido, velocidade_m_rapido);
	}
	
	return 0;
}
