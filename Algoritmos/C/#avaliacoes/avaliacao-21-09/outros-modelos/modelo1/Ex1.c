#include <stdio.h>

int main () {
	
	int position, top;
	do {
		printf("Digite sua posicao: ");
		scanf("%d", &position);
		
		if (position <= 0 || position > 100) {
			printf("Por favor digite uma posicao no intervalo 0, 100!\n");
		} else {
			break;
		}
	}  while (1);
	
	if (position == 1) {
		top = 1;
	} else if (position < 4) {
		top = 3;
	} else if (position < 6) {
		top = 5;
	} else if (position < 11) {
		top = 10;
	} else if (position < 26) {
		top = 25;
	} else if (position < 51) {
		top = 50;
	} else {
		top = 100;
	}

	printf("Top %d", top);

	return 0; 
}
