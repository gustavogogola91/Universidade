#include <stdio.h>

int main () {
	
	int pont_sons, pont_grif, input;
	pont_sons = pont_grif = input = 0;
	
	printf("Iniciando simulacao do jogo: Grifinoria X Sonserina\n");
	
	while(1) {
		printf("===========================================\n");
		printf("Selecione uma opcao:\n[1]Grifinoria fez um gol;\n[2]Sonserina fez um gol;\n[3]Grifinoria capturou o pomo de ouro;\n[4]Sonserina capturou o pomo de ouro;\n>> ");
		scanf("%d", &input);
		
		if (input == 1) {
			pont_grif += 10;
			printf("Pontos adicionados!\n");
		} else if (input == 2){
			pont_sons += 10;
			printf("Pontos adicionados!\n");
		} else if (input == 3) {
			pont_grif += 150;
			break;
		} else if (input == 4) {
			pont_sons += 150;
			break;
		} else {
			printf("ERROR: codigo nao encontrado!\n");
		}
	}
	
	printf("Fim de jogo!\nPlacar final: Grifinoria %d X %d Sonserina\n", pont_grif, pont_sons);
	
	if (pont_grif > pont_sons) {
		printf("Ganhador: Grifinoria");
	} else if (pont_sons > pont_grif) {
		printf("Ganhador: Sonserina");
	} else {
		printf("Empate");
	}
	 
	return 0;
}
