#include <stdio.h>

void imprimir(int tam, int arr[tam], char arrChar[tam]){
    for(int l = 0; l < tam; l++){
        for(int c = 0; c < arr[l]; c++){
            printf("%c", arrChar[l]);
        }
    }
}

int main() {
    int tam = 5, arr[5] = {2, 3, 4, 1, 9};
    char arrChar[5] = {'A', 'B', 'C', 'D', 'E'}; 

    imprimir(tam, arr, arrChar);
}