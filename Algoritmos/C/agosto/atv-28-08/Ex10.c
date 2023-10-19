#include <stdio.h>

int main () {
	
	int n, a, b, tempo_total;
	
	printf("Digite o temo restante para o fim do expediente: ");
	scanf("%i", &n);
	
	printf("Digite o tempo para terminar o primeiro presente: ");
	scanf("%i", &a);
	
	printf("Digite o tempo para terminar o segundo presente: ");
	scanf("%i", &b);
	
	tempo_total = a + b;
	
	if (tempo_total > n) {
		printf("Deixa para amanha!");
	} else {
		printf("Farei hoje!");
	}
	
}
