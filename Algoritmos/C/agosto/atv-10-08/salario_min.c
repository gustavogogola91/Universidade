#include <stdio.h>

int main () {

    float salarioMinimo, salarioUsuario, qtdSalario;

    printf("Digite o valor do salario minimo: \n");
    scanf("%f", &salarioMinimo);

    printf("Digite seu salario: \n");
    scanf("%f", &salarioUsuario);

    qtdSalario = salarioUsuario / salarioMinimo;

    printf("O valor de %f equivale a %f salarios minimos.", salarioUsuario, qtdSalario);

    return 0;
}