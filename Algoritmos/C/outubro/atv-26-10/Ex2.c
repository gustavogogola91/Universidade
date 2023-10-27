#include <stdio.h>

int leitura() {
	int num;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	return num;
}

int maior(int a, int b, int c) {
	int maiorN;
	if(a > b && a > c) {
		maiorN = a;
	} else if(b > a && b > c) {
		maiorN = b;
	} else {
		maiorN = c;
	}
}

int main() {
	int a, b, c;
	
	a = leitura();
	b = leitura();
	c = leitura();
	
	printf("O maior numero eh %d", maior(a, b, c));
	
	return 0;
}
