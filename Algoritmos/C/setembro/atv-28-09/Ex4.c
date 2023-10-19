#include <stdio.h>

int main() {

    int arr[6], input, i, maior = 0, menor = 20;
    float media, soma = 0.0;

    for(i = 0; i < 6; i++) {
        printf("Digite um numero par entre 1 e 20:\n>> ");
        
        do {
            scanf("%d", &input);

            if(input <= 20 && input > 1){
                if(input % 2 == 0) {
                    arr[i] = input;
                    soma += input;
                    
                    if(maior < input) {
                        maior = input;
                    }
                    if(menor > input){
                        menor = input;
                    }
                    break;
                }
            }
        printf("Valor invalido\n>>");
        } while(1);
    }
    
    media = soma / 6;

    for(i = 0; i < 6; i++) {
        printf("Indice %d: %d\n", i, arr[i]);
    }
    printf("Maior numero: %d\nMenor numero: %d\n Media: %.2f", maior, menor, media);

    return 0;
}
