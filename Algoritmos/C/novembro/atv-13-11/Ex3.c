#include <stdio.h>

typedef struct {
    char chave[20];
    float valor;
} pix;

int main() {
    float saldo;
    pix d[5];

    printf("Digite o saldo disponivel: ");
    scanf("%f", &saldo);

    for(int i = 0; i < 5; i++) {
        fflush(stdin);
        printf("PIX %d\n", i);
        printf("Digite a chave: ");
        scanf("%[^\n]s", d[i].chave);

        printf("Digite o valor: ");
        scanf("%f", &d[i].valor);

        if(d[i].valor > saldo) {
            printf("ERRO - nao ha saldo suficiente!\n");
        } else {
            saldo -= d[i].valor;

            printf("Saldo restante: R$ %.2f\n", saldo);
        }
    }

    return 0;
}