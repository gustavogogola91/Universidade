#include <stdio.h>

int main () {
	int cont, a, r, q;
	
	printf("Digite um valor inicial: ");
	scanf("%d", &a);
	
	printf("Digite a razao: ");
	scanf("%d", &r);
	q = a;
	
	for (cont = 1; cont <= 10; cont ++) {
		printf("%d\n", q);
		q += r;
		
		
	}
	
	return 0;
}
