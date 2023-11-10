#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int jogaMoeda(){
    return rand() % 2;
}

void jogaVarias(float n) {
    int aux, cont[2] = {0,0}, porc[2];
    for(int i = 0; i < n; i++){
        aux = jogaMoeda();
       if(aux == 0){
           cont[0]++;
       } else {
           cont[1]++;
       }
    }
    for(int i = 0; i < 2; i++) {
        porc[i] = (cont[i] / n) * 10;
    }
    printf("Cara: %.2f %%\n", porc[0]);
    printf("Coroa: %.2f %%", porc[1]);
}

int main(){
    srand(time(NULL));

	float input;

    printf("Quantas vezes gostariade jogar?\n");
    scanf("%f", &input);
    
    jogaVarias(input);
    
}
