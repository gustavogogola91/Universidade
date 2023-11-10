#include <stdio.h>

void lerMatriz(int matriz[3][3]){
    for(int l = 0; l < 3; l++) {
        for(int c = 0; c < 3; c++) {
            printf("Digite o valor da posicao %d %d: ", l, c);
            scanf("%d", &matriz[l][c]);
        }
    }
}

void imprimirMatriz(int matriz[3][3]){
    for(int l = 0; l < 3; l++) {
        for(int c = 0; c < 3; c++) {
            printf("%d  ", matriz[l][c]);
        }
        printf("\n");
    }
}

void somarMatrizes(int matriz1[3][3], int matriz2[3][3], int result[3][3]) {
    for(int l = 0; l < 3; l++) {
        for(int c = 0; c < 3; c++) {
            result[l][c] = matriz1[l][c] + matriz2[l][c];
        }
    }
}

int main() {
    int matriz1[3][3], matriz2[3][3], result[3][3];

    printf("Iniciando preenchimento da matriz 1: \n");
    lerMatriz(matriz1);
    imprimirMatriz(matriz1);
    printf("Iniciando preenchimento da matriz 2: \n");
    lerMatriz(matriz2);
    imprimirMatriz(matriz2);

    somarMatrizes(matriz1, matriz2, result);

    printf("Somando matrizes...");
    sleep(1);
    printf("Matriz resultante: \n");
    imprimirMatriz(result);
}