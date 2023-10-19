#include <stdio.h>

int main () {
	
	float salario_min, quant_quilowatt, valor_quilowatt, valor_pago;
	
	printf("Digite o valor do salario minimo: R$ ");
	scanf("%f", &salario_min);
	
	printf("Digite a quantidade de quilowatts gasta neste mes: ");
	scanf("%f", &quant_quilowatt);
	
	valor_quilowatt = (salario_min / 7) / 100;
	
	valor_pago = quant_quilowatt * valor_quilowatt;
	
	printf("Cada quilowatt esta custando R$ %.2f , totalizando R$ %.2f de conta a pagar", valor_quilowatt, valor_pago);
	
	
	
	return 0;
}
