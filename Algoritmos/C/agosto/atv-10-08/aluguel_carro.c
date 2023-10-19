#include <stdio.h>

#define VALOR_DIARIO 70.0
#define VALOR_PKM 0.15


int main () {
    
    float km_percorridos, valor_a_pagar;

    int qtd_dias_alugados;

    printf("Digite a quantidade de dias que o carro foi alugado: \n");
    scanf("%d", &qtd_dias_alugados);

    printf("Digite a quantidade de KM percorridos: \n");
    scanf("%f", &km_percorridos);

    valor_a_pagar = (km_percorridos * VALOR_PKM) + (qtd_dias_alugados * VALOR_DIARIO);
    
    printf("Valor a pagar: %.2f\n", valor_a_pagar);

    return 0;
}