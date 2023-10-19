#include <stdio.h>

int main() {

    int i,j;
    float neo[3], smith[3];// position 0 = ataque, 1 = defesa, 2 = força
    char palavras[2][30] = {"o poder de ataque", "a capacidade de defesa"};

    for(i = 0; i < 2; i++){
        do {
            printf("Digite %s do Neo: [1.0,10.0]", palavras[i]);
            scanf("%f", &neo[i]);
        } while(neo[i] > 10.0 || neo[i] <= 0);
    };

    if(neo[0] == neo[1]) {
        neo[2] = (neo[0] * 2) + neo[1];
    } else {
        neo[2] = neo[0] * (neo[1]*0.75);
    }

    for(i = 0; i < 2; i++){
        do {
            printf("Digite %s do Smith: [1.0,10.0]", palavras[i]);
            scanf("%f", &smith[i]);
        } while(smith[i] > 10.0 || smith[i] <= 0);
    }

    if(smith[0] == smith[1]) {
        smith[2] = (smith[0] * 2) + smith[1];
    } else {
        smith[2] = smith[0] * (smith[1]*0.75);
    }


    printf("Forca do Neo: %.5f\nForca do Smith: %.5f\n", neo[2], smith[2]);

    if(neo[2] > smith[2]){
        printf("Smith eh mais forte!");
    } else if (smith[2] > neo[2]){
        printf("Neo eh mais forte!");
    } else {
        printf("os dois tem a mesma forca!");
    }
    

    return 0;
}