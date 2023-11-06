#include <stdio.h>

void mostrar(int value) {
	if((value % 2 == 0) || (value % 3 == 0)) {
		printf("Este valor eh divisivel por 2 ou por 3");
	} else {
		printf("Valor invalido");
	}
}

int main() {
	
	int input;
	
	printf("Digite o valor: ");
	scanf("%d", &input);
	
	mostrar(input);
	
	return 0;
}
