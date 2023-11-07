#include <stdio.h>

void alterar(int *x) {
	*x = *x * -1;
}

int main() {
	
	int input;
	
	printf("Digite um numero: ");
	scanf("%d", &input);
	
	alterar(&input);
	
	printf("%d", input);
}
