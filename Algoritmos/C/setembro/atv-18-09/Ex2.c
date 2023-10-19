#include <stdio.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	int input, i, flag = 0;// flag 0 => numero não é primo
	
	printf("Digite um número: ");
	scanf("%d", &input);
	
	for(i = 2; i < input; i++) {
		
		if(input % i == 0) {
			flag = 1;
		}
	}
	
	if(flag == 0) {
		printf("O número é primo!");
	} else {
		printf("O número não é primo!");
	}
	
	
	return 0;
} 
