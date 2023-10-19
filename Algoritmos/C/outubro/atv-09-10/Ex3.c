#include <stdio.h>
#include <string.h>

int main () {
	
	char input[100], reverse[100];
	int tam,i, k, resp = 0;
	
	printf("Digite uma frase ou palavra: ");
	fgets(input, 100, stdin);
	
	tam = strlen(input);
	
	for(i = 0, k = tam - 2; i < k; i++, k--) {
		if(input[i] != input[k]) {
			resp = 1;
			break;
		}
		
	}
	
	
	
	if(resp == 0) {
		printf("\nA string eh um palindromo");
	} else {
		printf("\nA string nao eh um palindromo");
	}
	
	return 0;
}
