#include <stdio.h>

typedef struct {
    char nome[30];
    float peso;
    float altura;
    float imc;

} esportista;

int main () {

    esportista dados[5];

    for(int i = 0; i < 5; i++) {
        fflush(stdin);
        printf("Esportista %d\n", i);
        printf("Digite o nome: ");
        scanf("%[^\n]s", dados[i].nome);

        printf("Digite o peso: ");
        scanf("%f", &dados[i].peso);

        printf("Digite a altura: ");
        scanf("%f", &dados[i].altura);

        dados[i].imc = dados[i].peso / (dados[i].altura * dados[i].altura);
    }

    for(int i = 0; i < 5; i++) {
        printf("Esportista: %s\n", dados[i].nome);
        printf("Peso: %.2f\n", dados[i].peso);
        printf("Altura: %.2f\n", dados[i].altura);
        printf("IMC: %.2f\n\n", dados[i].imc);
    }

    return 0;
}