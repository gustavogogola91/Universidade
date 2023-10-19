#include <stdio.h>

int main() {

    int correto, players[5], num_corretos = 0, i;

    do {
        printf("Digite a opcao correta: [1,4]");
        scanf("%d", &correto);
    } while(correto > 4 || correto < 1);

    for (i = 0; i < 5; i++) {
        do {
            printf("Digite a escolha do jogador %d: ", i+1);
            scanf("%d", &players[i]);
        } while(players[i] > 4 || players[i] < 1);
    }

    for (i = 0; i < 5; i++) {
        if(correto == players[i]) {
            num_corretos++;
        }
    }

    printf("%d jogadores acertaram!", num_corretos);
	
	return 0;
}
