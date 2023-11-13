#include <stdio.h>

typedef struct {
    char data[12];
    char timeM[20];
    char timeV[20];
    int golsM;
    int golsV;
} jogo;

int main() {

    jogo j[5];

    for(int i = 0; i < 5; i++) {
        printf("Jogo %d\n", i);
        printf("Digite a data: ");
        fflush(stdin);
        scanf("%[^\n]s", j[i].data);

        fflush(stdin);
        printf("Time mandante: ");
        scanf("%[^\n]s", j[i].timeM);

        fflush(stdin);
        printf("Time visitante: ");
        scanf("%[^\n]s", j[i].timeV);

        printf("Gols do time mandante: ");
        scanf("%d", &j[i].golsM);

        printf("Gols do time visitante: ");
        scanf("%d", &j[i].golsV);

    }

    for(int i = 0; i < 5; i++) {
        printf("Jogo %d\n", i);
        printf("Data: %s\n", j[i].data);
        printf("Time mandante: %s\n", j[i].timeM);
        printf("Time visitante: %s\n", j[i].timeV);
        printf("Gols time mandante: %d\n", j[i].golsM);
        printf("Gols time visitante: %d\n", j[i].golsV);
    }

    return 0;
}