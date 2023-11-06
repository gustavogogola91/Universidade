#include <stdio.h>

void verificar(int x) {
	int sum = 0, i;
	for(i = 1; i < x; i++) {
		if(x % i == 0) {
			sum += i;
		}
	}
	if(sum == x) {
		printf("Este numero eh perfeito");
	} else {
		printf("Este nao e um numero perfeito");
	}
}

int main() {
	
	int input;
	
	printf("Digite um numero: ");
	scanf("%d", &input);
	
	verificar(input);
	
	return 0;
}
