#include <stdio.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	int min, max, sum = 0, i;
	
	printf("Digite um limite m�nimo: ");
	scanf("%d", &min);
	
	printf("Digite um limite m�ximo: ");
	scanf("%d", &max);
	
	for (i = min; i < max; i++){
		if (i % 2 == 0) {
			printf("%d ", i);
			sum += i;
		}
	}
	printf("\nSomat�ria: %d", sum);
	
	return 0;
}
