#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
	
	int arr[4][4], input, l, c, flag, sumb = 0, sumc = 0, sumd = 0, sume = 0, i;
	char inputc;
	
	for(l = 0; l < 4; l++) {
		for(c = 0; c < 4; c++) {
			printf("Digite um valor para a posicao %d %d: ", l, c);
			scanf("%d", &arr[l][c]);
		}
	}
	
	do {
		
		printf("\nMenu\n_____________________________________________\na)imprimir todos os elementos da matriz\nb)somar os quadrados de todos os elementos da primeira coluna\n");
		printf("c)somar todos os elementos da terceira linha\nd)somar todos os elementos da diagonal principal\ne)somar todos os elementos de indice par da segunda linha\nf)sair\n>>>");
		scanf(" %c", &inputc);
		inputc = tolower(inputc);
		
		switch(inputc) {
			case 'a':
				for(l = 0; l < 4; l++) {
					for(c = 0; c < 4; c++) {
						printf("%d  ", arr[l][c]);
					}
					printf("\n");
				}
				break;
			case 'b':
				for(l = 0; l < 4 ; l++){
					sumb += pow(arr[l][0], 2);
				}
				printf("Soma = %d\n", sumb);
				break;
			case 'c':
				for(c = 0; c < 4 ; c++){
					sumc += arr[2][c];
				}
				printf("Soma = %d", sumc);
				break;
			case 'd':
				for(i = 0; i < 4; i++) {
					sumd += arr[i][i];
				}
				printf("Soma = %d", sumd);
				break;
			case 'e':
				for(c = 0; c < 4 ; c++){
					if(c  % 2 == 0){
						sume += arr[1][c];
					}
				}
				printf("Soma = %d", sume);
				break;
			case 'f':
				flag = 1;
				break;
		}
		sumb = sumc = sumd = sume = 0;
		if(flag) {
			break;
		}
		
	} while(1);
	
	return 0;
}

