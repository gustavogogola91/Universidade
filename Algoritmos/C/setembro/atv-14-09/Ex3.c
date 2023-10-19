#include <stdio.h>

int main () {
	int a, r, q, cont;
	double q;
	
	printf("Digite um valor inicial: ");
	scanf("%d", &a);
	
	printf("Digite a razao: ");
	scanf("%d", &r);
	
	q = a;
	
	for(cont = 1; cont <= 10; cont++) {
		printf("%lf\n", q);
		q *= r;
	}
	
	return 0;
}
