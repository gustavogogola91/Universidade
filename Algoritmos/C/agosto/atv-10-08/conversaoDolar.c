#include <stdio.h>

int main () {

    float cotacao_dolar, valor_disponivel, conversao;

    printf("Digite a cotacao atual do Dolar: \n");
    scanf("%f", &cotacao_dolar);

    printf("Digite o valor que deseja converter: \n");
    scanf("%f", &valor_disponivel);

    conversao = valor_disponivel / cotacao_dolar;

    printf("O valor convertido e: %.2f\n", conversao);

    return 0;
}