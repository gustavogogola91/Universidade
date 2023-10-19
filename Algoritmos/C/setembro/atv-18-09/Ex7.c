#include <stdio.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	int min, max, sum = 0, i;
	
	printf("Digite um limite mínimo: ");
	scanf("%d", &min);
	
	printf("Digite um limite máximo: ");
	scanf("%d", &max);
	
	for (i = min; i < max; i++){
		if (i % 2 == 0) {
			printf("%d ", i);
			sum += i;
		}
	}
	printf("\nSomatória: %d", sum);
	
	return 0;
}
