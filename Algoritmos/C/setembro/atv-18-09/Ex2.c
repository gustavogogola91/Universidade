#include <stdio.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	int input, i, flag = 0;// flag 0 => numero n�o � primo
	
	printf("Digite um n�mero: ");
	scanf("%d", &input);
	
	for(i = 2; i < input; i++) {
		
		if(input % i == 0) {
			flag = 1;
		}
	}
	
	if(flag == 0) {
		printf("O n�mero � primo!");
	} else {
		printf("O n�mero n�o � primo!");
	}
	
	
	return 0;
} 
