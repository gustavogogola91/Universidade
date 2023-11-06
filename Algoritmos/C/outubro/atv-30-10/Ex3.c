#include <stdio.h>

float convert(float x) {
	return  (x * 9 / 5) + 32;
}

int main() {
	float x, result;
	
	printf("Digite um valor em celsius: ");
	scanf("%f", &x);
	
	result = convert(x);
	
	printf("%.2f graus celsius equivale a %.2f graus fareheit", x, result);
	
	return 0;
}
