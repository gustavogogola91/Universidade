#include <stdio.h>
#include <locale.h>
#include<windows.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	int input = 1,cont;
	
	while(input != 0) {
	
		
		printf("Digite um número: ");
		scanf("%d", &input);
		
		if(input > 0) {
			for(cont = 0; cont < input; cont++){
				printf("*");
			}
		}	
		
		printf("\n");
	};
	
	return 0;
}
