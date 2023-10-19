#include <stdio.h>
#include <time.h>

int main() {
	
	srand(time(NULL));
	
	int arr[1000], input, i, pos = -1;
	
	for(i = 0; i < 1000; i++) {
		arr[i] = rand() % 1001;
	}
	
	printf("Digite um numero: ");
	scanf("%d", &input);
	
	for(i = 0; i < 1000; i++) {
		if(arr[i] == input) {
			pos = i;
			break;
		}
	}
	
	if(pos != -1) {
		printf("O numero digitado esta na posicao %d", pos);
	} else {
		printf("O numero nao esta no vetor");
	}
	
	
	
	
	return 0;
}
