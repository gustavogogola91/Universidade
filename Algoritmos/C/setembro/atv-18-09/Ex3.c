#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	int input, i, flag = 0;// flag 0 => numero n�o � primo
	
	do {
		printf("Digite um n�mero: ");
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
			printf("O n�mero � primo!\n");
		} else{
			printf("O n�mero n�o � primo!\n");
		}
		flag = 0;
	
	} while (input >= 0);
	
	return 0;
} 
