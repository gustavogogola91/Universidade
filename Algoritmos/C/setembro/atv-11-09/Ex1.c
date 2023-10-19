#include <stdio.h>

int main () {
	int num=0, aux;
	printf("Numeros impares:\n");
	do {
		aux = num % 2;
		if(aux != 0) {
			printf("%d\n", num);
		}
		num++;
	} while(num <= 20);
}
