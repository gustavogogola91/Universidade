#include <stdio.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	int input;
	
	while(1){
		
		printf("\nDigite um número: ");
		scanf("%d", &input);
		
		if (input == 0 ){
			break;
		} else if(input > 100 && input < 200){
			printf("O número está entre 100 e 200");
		}
		
	}
}
