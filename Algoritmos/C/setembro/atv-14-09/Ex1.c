#include <stdio.h>

int main () {
	int aux, result,i;
	
	printf("Mumtiplos de 3 no conjmjunto de 1 ate 500\n");
	for (i = 0; i <= 500; i++) {
		if(i % 3 == 0 ) {
			printf("%d\n", i);
		}
	}
	
	return 0;
	
}

