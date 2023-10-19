#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	int input, i, flag = 0;// flag 0 => numero não é primo
	
	do {
		printf("Digite um número: ");
		scanf("%d", &input);
	
		for(i = 2; i < input; i++) {
			if(input % i == 0) {
				flag = 1;
			}
		}
		
		if (input < 0){
			break;
		};
		
		if(flag == 0) {
			printf("O número é primo!\n");
		} else{
			printf("O número não é primo!\n");
		}
		flag = 0;
	
	} while (input >= 0);
	
	return 0;
} 
