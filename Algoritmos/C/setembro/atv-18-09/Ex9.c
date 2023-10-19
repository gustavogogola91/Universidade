#include <stdio.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	int input;
	float h, i;
	
	printf("Digite um numero: ");
	scanf("%d", &input);
	
	for(i = 1; i <= input; i++){
		
		h += (1.0/i);
		printf("%f\n", h);
	}
	
	printf("%f", h);
	
	return 0;
	
}
