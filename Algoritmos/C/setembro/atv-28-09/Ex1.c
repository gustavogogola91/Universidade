#include <stdio.h>

int main() {

    float arr1[4], arr2[4], x;
    int i;

    for(i = 0; i < 4; i++){
        printf("Digite um valor para o primeiro vetor: ");
        scanf("%f", &arr1[i]);
        printf("Digite um valor para o segundo vetor: ");
        scanf("%f", &arr2[i]);
    }

    for(i = 0; i < 4; i++){
        x = arr1[i] - arr2[i];
        printf("Resultado: %f\n", x);
    }
    
    return 0;
}
