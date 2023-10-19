#include <stdio.h>
#include <ctype.h>

int main () {
	
	char letra, aux;
	
	printf("Digite um caractere: ");
	scanf(" %c", &letra);
	
	aux = toupper(letra);
	letra = aux;
	
	switch (letra) {
		case 'A':
			printf("Eh uma vogal!");
			break;
		case 'E':
			printf("Eh uma vogal!");
			break;
		case 'I':
			printf("Eh uma vogal!");
			break;
		case 'O' :
			printf("Eh uma vogal!");
			break;
		case 'U':
			printf("Eh uma vogal!");
			break;
		default:
			printf("Eh uma consoante!");
			break;
	};
	
	return 0;
}
