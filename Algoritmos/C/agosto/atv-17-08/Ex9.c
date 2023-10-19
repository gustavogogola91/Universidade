#include <stdio.h>

int main () {
	
	float valor_h, percentual_INSS, salario;
	int num_aulas;
	
	printf("Digite o valor da hora aula: R$ ");
	scanf("%f", &valor_h);
	
	printf("Digite o numero de horas de aula: ");
	scanf("%i", &num_aulas);
	
	printf("Digite a porcentagem de desconto do INSS: ");
	scanf("%f", &percentual_INSS);
	
	salario = valor_h * num_aulas * (1 - percentual_INSS / 100);
	
	printf("O salario final sera de R$ %.2f", salario);
	
	return 0;
}
