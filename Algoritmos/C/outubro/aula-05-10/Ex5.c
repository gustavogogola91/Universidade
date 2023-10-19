#include <stdio.h>

int main() {
	
	int l,c, sum;
	float arr[3][6];
	
	for(l = 0; l < 3; l++) {
		for(c = 0; c < 6; c++) {
			printf("Digite o salario do funcionario %d da loja %d: R$ ", c+1, l+1);
			scanf("%f", &arr[l][c]);
		}
	}
	printf("Salarios:\n");
	for(l = 0; l < 3; l++) {
		printf("\nLoja %d  \n", l+1);
		for(c = 0; c < 6; c++) {
			printf("	Funcionario %d: R$ %.2f", c+1, arr[l][c]);

		}
	}
	return 0;
}
