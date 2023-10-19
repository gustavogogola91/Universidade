#include <stdio.h>

int main () {
	
	float num1, num2, result;
	int aux = 1;
	
	printf("Digite o primeiro numero: ");
	scanf("%f", &num1);
	
	printf("Digite o segundo numero: ");
	scanf("%f", &num2);
	
	printf("Selecione a operacao:\n- (1) Adicao\n- (2) Subtracao\n- (3) Multiplicacao\n- (4) Divisao\n> ");
	scanf("%i", &aux);
	
	switch(aux) {
		case 1:
			result = num1 + num2;
			printf("O reslutado de %.1f + %.1f eh %.1f", num1, num2, result);
			break;
		case 2:
			result = num1 - num2;
			printf("O reslutado de %.1f - %.1f eh %.1f", num1, num2, result);
			break;
		case 3:
			result = num1 * num2;
			printf("O reslutado de %.1f X %.1f eh %.1f", num1, num2, result);
			break;
		case 4:
			result = num1 / num2;
			printf("O reslutado de %.1f / %.1f eh %.1f", num1, num2, result);
			break;
		default:
			printf("Opcao nao encontrada");
			break;
	};
	
	return 0;
}
