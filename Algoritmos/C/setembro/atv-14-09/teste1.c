#include <stdio.h>

int main (){
	
	int entrada, soma, soma_par, cont;
	float media;
	entrada = soma = soma_par = cont = 0;
	
	while(1) {
		
		printf("Digite um numero: (0 para finalizar) >>");
		scanf("%i", &entrada);
		
		if (entrada == 0){
			break;	
			
		} else if (entrada % 2 == 0) {
			soma_par += entrada;
			cont ++;
			
		} else {
			soma += entrada;
			
		};
	};
	
	media = soma_par / cont;
	printf("Soma dos impares: %d\nMedia dos pares: %.2f", soma, media);
	
	return 0;
}
