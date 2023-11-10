#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preenche(int *array, int *contador) {
    for(int i = 0; i < 1000; i++) {
        array[i] = (rand() % 6) + 1;
        switch(array[i]) {
            case 1:
                contador[0]++;
                break;
            case 2:
                contador[1]++;
                break;
            case 3:
                contador[2]++;
                break;
            case 4:
                contador[3]++;
                break;
            case 5:
                contador[4]++;
                break;
            case 6:
                contador[5]++;
                break;
        }
    }
}

int main() {
    srand(time(NULL));

    int arr[1000], cont[6] = {0, 0, 0, 0, 0, 0};
    float porc[6];
    

    preenche(&arr, &cont);

    for(int i = 0; i < 6; i++) {
        porc[i] = cont[i] / 10.0;
    }

    for(int i = 0; i < 6; i++) {
        printf("Valor: %d => %.2f %%\n", i + 1, porc[i]);
    }

    return 0;
    
}