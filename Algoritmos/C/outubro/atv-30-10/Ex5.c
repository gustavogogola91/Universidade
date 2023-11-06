#include <stdio.h>

float calc(float nota1, float nota2, float nota3) {
	return ((nota1 * 2) + (nota2 * 3) + (nota3 * 5)) / 10;
}

int main() {
	
	float n1, n2, n3, res;
	
	printf("Digite a nota 1: ");
	scanf("%f", &n1);
	
	printf("Digite a nota 2: ");
	scanf("%f", &n2);
	
	printf("Digite a nota 3: ");
	scanf("%f", &n3);
	
	res = calc(n1, n2, n3);
	
	printf("Nota: %.2f", res);
	
	return 0;
}
