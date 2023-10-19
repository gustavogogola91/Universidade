#include <stdio.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	int i = 1000, num = 0, cont = 0;
	
	while(1){
		
		if (i % 11 == 5){
			num = i;
			cont++;
		};
		if(cont == 5){
			printf("O quinto número maior que 1000 cuja divisão por 11 tem resto 5 é: %d", num);
			break;
		}
		
		i++;
	};
	
	return 0;
}
