#include <stdio.h>

#define W_POR_M 18

int main () {
		
	float largura, profundidade, area, potencia_necessaria;
	
	printf("Digite a largura do  comodo: (em m) ");
	scanf("%f", &largura);
	
	printf("Digite a profundidade do comodo: (em m) ");
	scanf("%f", &profundidade);
	
	area = largura * profundidade;
	
	potencia_necessaria = area * W_POR_M;
	
	printf("Um comodo de %.2f m quadrados necessita de uma potencioa de iluminacao de %.2f whats.", area, potencia_necessaria);
	
	return 0;
}
