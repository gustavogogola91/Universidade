#include <stdio.h>

int leitura() {
	
	int num;
	
	do {
		
		printf("Digite um numero positivo: ");
		scanf("%d", &num);
		
	} while(num < 0);
	
	return num;
}

void exibir(int a, int b) {
	int i;
	for( i = a; i <= b; i++){
		printf("%d  ", i);
	};
}

int main() {
	int a, b;
	char test;
	test = 's';
	
	do {
		a = leitura();
		b = leitura();
		
		if(a < b) {
			exibir(a, b);
		
			printf("Deseja continuar? [s/n]");
			scanf(" %c", &test);
		} else {
			printf("A deve ser maior ou igual a B\n");
		}
		
	} while(test == 's');
	
	return 0;
}
