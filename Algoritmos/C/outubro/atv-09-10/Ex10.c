#include <stdio.h>

int main() {
	
	int l,c,i, cont = 0;
	float arr[3][6], sum = 0, sum2, media;
	
	for(l = 0; l < 3; l++) {
		for(c = 0; c < 6; c++) {
			printf("Digite o salario do funcionario %d da loja %d: R$ ", c, l);
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
	
	for(l = 0; l < 3; l++){
		for(c = 0; c < 6; c++){
			sum += arr[l][c];	
		}
		printf("\nLoja %d: Total pago R$ %.2f\n", l, sum);
		sum = 0.0;
	}
	
	for(c = 0; c < 6; c++){
		if(arr[0][c] > 2000.00) {
			cont++;
		}	
	}
	printf("\n%d funcionarios da loja 1 recebem mais de R$ 2000.00\n", cont);
	
	for(c = 0; c < 6; c++){
		sum2 += arr[1][c];
		media = sum2 / 6.0;
	}
	printf("Media de salarios da segunda loja R$ %.2f", media);
	
	return 0;
}
