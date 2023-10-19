#include <stdio.h>

int main() {

    float salarioJ1, salarioJ2, salarioR, receita, input, despesas;
    receita = despesas = 0;

    printf("Digite o salario do primeiro emprego do Julius: U$ ");
    scanf("%f", &salarioJ1);

    printf("Digite o salario do segundo emprego do Julius: U$ ");
    scanf("%f", &salarioJ2);

    printf("Digite o salario da Rochele: U$ ");
    scanf("%f", &salarioR);

    receita = salarioJ1 + salarioJ2 + salarioR;

    while(1) {
        printf("Digite o valor da compra: ");
        scanf("%f", &input);

        despesas += input;

        if (despesas < receita / 2) {
            printf("Eu nao preciso disso, meu marido tem dois empregos.\nDespesas: U$ %.2f\n", despesas);
        } else if (despesas > receita) {
            printf("Ei carinha que mora logo ali, me passa um dolar\nDespesas: U$ %.2f\n", despesas);
            break;
        } else {
            printf("Se voce nao comprar nada, o desconto eh bem maior\nDespesas: U$ %.2f\n", despesas);
        }
    }

    return 0;
}
