#include <stdio.h>

int main () {
	int entrada;
	
	do {
		printf("\nDigite um numero: ");
		scanf("%d", &entrada);
		if (entrada < 0){
			continue;	
		}else if (entrada < 26){
			printf("Esta no intervalo [0,25]");
		} else if (entrada< 51){
			printf("Esta no intervalo [26,50]");
		} else if (entrada < 76) {
			printf("Esta no intervalo [51,75]");
		} else if (entrada < 101) {
			printf("Esta no intervalo [76,100]");
		} else {
			printf("Esta no intervalo [100, +]");
		}
	} while(entrada >= 0);
}
