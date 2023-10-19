#include <stdio.h>

int main () {
	
	int p1, p2, c1, c2, result_dir, result_esq;
	
	do{
		printf("Digite o peso da crianca do lado esquerdo: ");
		scanf("%d", &p1);
		
		if (p1 >= 10 && p1 <= 100) {
			break;
		} else {
			printf("Por favor digite um valor no intervalo [10,100]\n");
		}
	} while(1);
	
	do{
		printf("Digite o comprimento do lado esquerdo da balanca: ");
		scanf("%d", &c1);
		
		if (c1 >= 10 && c1 <= 100) {
			break;
		} else {
			printf("Por favor digite um valor no intervalo [10,100]\n");
		}
	} while(1);
	
	do{
		printf("Digite o peso da crianca do lado direito: ");
		scanf("%d", &p2);
		
		if (p2 >= 10 && p2 <= 100) {
			break;
		} else {
			printf("Por favor digite um valor no intervalo [10,100]\n");
		}
	} while(1);
	
	do{
		printf("Digite o comprimento do lado direito da balanca: ");
		scanf("%d", &c2);
		
		if (c2 >= 10 && c2 <= 100) {
			break;
		} else {
			printf("Por favor digite um valor no intervalo [10,100]\n");
		}
	} while(1);
	
	
	result_esq = p1 * c1;
	
	result_dir = p2 * c2;
	
	if (result_dir == result_esq) {
		printf("0");
	} else if (result_esq > result_dir) {
		printf("-1");
	} else {
		printf("1");
	}
	
	return 0;
}
