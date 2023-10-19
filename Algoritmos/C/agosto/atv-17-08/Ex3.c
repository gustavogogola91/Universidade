#include <stdio.h>

int main (){
	
	float salario_atual, porcentagem_aumento, salario_final, valor_aumento;
	
	printf("Digite o salario atual: ");
	scanf("%f", &salario_atual);
	
	printf("Digite a porcentagem de aumento: ");
	scanf("%f", &porcentagem_aumento);
	
	salario_final =  salario_atual + salario_atual * porcentagem_aumento;
	
	valor_aumento = salario_final - salario_atual;
	
	printf("O funcionario recebera um aumento de %.2f, resultando em um salario de %.2f", valor_aumento, salario_final);
	
	return 0;
}
