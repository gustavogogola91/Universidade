#include <stdio.h>

int main() {
	
	float a, b, c;
	
	printf("Digite um numero: \n");
	scanf("%f", &a);
	
	printf("Digite outro numero: \n");
	scanf("%f", &b);
	
	c = (a + b) * b;
	
	printf("O resultado eh: %f", c);
	
	return 0;
}
