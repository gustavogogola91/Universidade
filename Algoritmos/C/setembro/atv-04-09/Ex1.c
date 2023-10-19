#include <stdio.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	int cont, soma, entrada;
	float  media;
	soma = cont = entrada = 0;
	media = 1;
	
	while(cont != 10) {
		printf("Digite um número: ");
		scanf("%d", &entrada);
		
		soma += entrada;
		cont++; 
	};
	
	media = soma / cont;
	
	printf("A soma dos valores digitados é %d e a media é %.2f", soma, media);
	
	return 0;
}
