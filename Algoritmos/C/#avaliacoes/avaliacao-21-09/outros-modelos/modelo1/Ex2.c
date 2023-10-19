#include <stdio.h>

int main() {

    int gol_ta, gol_gr, pont_ta, pont_gr, i;
    pont_ta = pont_gr = 0;


    for (i = 1 ; i <= 3; i++) {
        printf("Jogo %d\n", i);
        printf("Digite os gols do time Tamarindo: ");
        scanf("%d", &gol_ta);

        printf("Digite os gols do time Groselha: ");
        scanf("%d", &gol_gr);

        if(gol_ta > gol_gr) {
            printf("Vitoria do time Tamarindo\n");
            pont_ta += 3;
        } else if(gol_gr > gol_ta) {
            printf("Vitoria do time Groselha\n");
            pont_gr =+ 3;
        } else {
            printf("Empate\n");
            pont_gr ++;
            pont_ta ++;
        }
    };

    if(pont_gr > pont_ta) {
        printf("O time Groselha venceu o campeonato!");
    } else if (pont_ta > pont_gr) {
        printf("O time Tamarindo venceu o campeonato!");
    } else {
        printf("O campeonato terminou empatado!");
    }
    return 0;
}
