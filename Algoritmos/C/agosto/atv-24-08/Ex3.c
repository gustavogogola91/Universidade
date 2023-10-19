#include <stdio.h>

int main () {
	
	int num;
	
	printf("Digite um numero de 1 a 7: ");
	scanf("%d", &num);
	
	switch (num) {
		case 1:
			printf("Segunda");
			break;
		case 2:
			printf("Terca");
			break;
		case 3:
			printf("Quarta");
			break;
		case 4:
			printf("Quinta");
			break;
		case 5:
			printf("Sexta");
			break;
		case 6:
			printf("Sabado");
			break;
		case 7:
			printf("Domingo");
			break;
		default:
			printf("Esta valor nao esta entre 1 e 7.");
			break;
	}
	
	return 0;
}
