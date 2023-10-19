#include <stdio.h>

int main () {
	
	float salario, porcentagem, salario_corrigido = 0;
	
	printf("Digite seu salario: ");
	scanf("%f", &salario);
	
	if (salario > 0 && salario <= 1400.00) {
		
		porcentagem = 15.0;
		salario_corrigido = salario * (1 + porcentagem / 100);
		
	} else if (salario <= 2000.00){
		
		porcentagem = 12.0;
		salario_corrigido = salario * (1 + porcentagem / 100);
		
	} else if (salario <= 3000.00) {
		
		porcentagem = 10.0;
		salario_corrigido = salario * (1 + porcentagem / 100);
		
	} else if (salario <= 3800.00) {
		
		porcentagem = 7.0;
		salario_corrigido = salario * (1 + porcentagem / 100);
		
	} else if (salario <= 5000.00){
		
		porcentagem = 4.0;
		salario_corrigido = salario * (1 + porcentagem / 100);
		
	};
	
	if (salario_corrigido != 0) {
		printf("O funcionario recebeu um aumento de %.0f \%%, resultando em um salario de R$ %.2f.", porcentagem,salario_corrigido);
	} else {
		printf("O funcionario recebe um salario acima de R$ 5000.00, por isso nao recebera aumento.");
	};
	
	return 0;
} 
