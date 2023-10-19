#include <stdio.h>

int main() {

    int qtd[6], qtd_total = 0, i, peso[6] = {300, 1500, 600, 1000, 150, 225};
    char nomes[6][12] = {"Curupira", "Boitata", "Boto", "Mapinguari", "Iara", "Chica"};

    for(i = 0; i < 6; i++) {
        do {
            printf("Digite a quantidade de porcoes que %s comera: [1,10] ", nomes[i]);
            scanf("%d", &qtd[i]);
        } while(qtd[i] > 10 ||  qtd[i] < 1);
    }

    for(i = 0; i < 6; i++){
        qtd_total += qtd[i] * peso[i];
    } 

    printf("Serao necessarios %dg", qtd_total);

}
