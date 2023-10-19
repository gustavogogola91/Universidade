#include <stdio.h>

int main () {
	
	float num;
	
	printf("Digite um valor: ");
	scanf("%f", &num);
	
	
	if (num < 0 || num > 100) {
		printf("Fora do intervalo");
	} else if (0 <= num && num <= 25.0) {
		printf("Esta no intervalo [0,25]");
	} else if (num <= 50.0){
		printf("Esta no intervalo (25,50]");
	} else if (num <= 75.0) {
		printf("Esta no intervalo (50,75]");
	} else {
		printf("Esta no intervalo (75,100]");
	}
	
	return 0;
}
