#include <stdio.h>

int main() {

    int arr[8], input, i, aux, flag = 0;// flag = 1 valor encontrado

    for(i = 0; i < 8; i++) {
        printf("Digite um numero:\n>> ");
        
        do {
            scanf("%d", &input);

            if(input >= 0){
                arr[i] = input;
                break;
                }
            
            printf("Valor invalido\n>>");
        } while(1);
	}
    
    printf("Digite outro numero: ");
    scanf("%d", &aux);

    for(i = 0; i < 8; i++) {
        if(aux == arr[i]) {
            flag = 1;
        }
    }

    if(flag == 1) {
        printf("O numero esta no array.");
    } else {
        printf("O numero nao esta no array.");
    }

    return 0;
}
