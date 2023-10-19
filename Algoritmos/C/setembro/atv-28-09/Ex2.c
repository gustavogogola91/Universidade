#include <stdio.h>

int main() {

    int i, arr[50];

    for (i = 0; i < 50; i++) {
        arr[i] = i * 5; 
    }
    

    for (i = 0; i < 50; i++) {
        if(i % 2 == 0) {
            printf("Indice %d: %d\n", i, arr[i]);
        }    
    }
    
    return 0;
}
