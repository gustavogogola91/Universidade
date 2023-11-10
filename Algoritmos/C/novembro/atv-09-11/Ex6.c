#include <stdio.h>

void depositar(float *saldo){
    float aux;
    printf("Qual o valor que deseja depositar? ");
    scanf("%f", &aux);
    *saldo += aux;
    printf("Depositando...\n");
    sleep(1);
    printf("Depositado R$ %.2f\n Saldo de R$ %.2f", aux, *saldo);
    sleep(1);
}

void sacar(float *saldo) {
    float aux;
    printf("Qual o valor que deseja sacar? ");
    scanf("%f", &aux);
    if(aux > *saldo) {
        printf("ERRO! Sua conta nao possui este valor!\n");
        sleep(1);
    } else {
        *saldo -= aux;
        printf("Sacando...");
        sleep(1);
        printf("Foi sacado R$ %.2f\n Saldo restante R$ %.2f", aux, *saldo);
        sleep(1);
    }
}

void verificarSaldo(float *saldo) {
    printf("Saldo atual: R$ %.2f", *saldo);
    sleep(1);
}

int main() {
    float saldo = 0;
    int flag = 1, input;
    do{
        printf("\nSelecione:\n[1] Para verificar seu saldo\n[2] Para depositar\n[3] Para sacar\n[4] Para finalizar o programa\n>>>> ");
        scanf("%d", &input);

        switch (input) {
        case 1:
            verificarSaldo(&saldo);
            break;
        case 2:
            depositar(&saldo);
            break;
        case 3:
            sacar(&saldo);
            break;
        case 4:
            flag = 0;
            break;
        default:
            printf("Codigo nao encontrado!\n");
            sleep(1);
            break;
        }
    } while (flag);
    

}