#include <stdio.h>
#include <math.h>

int main() {

    float num, exp, pot;
    exp = 2.00;
    printf("Digite um numero: \n");
    scanf("%f", &num);

    printf("Digite o expoente para a potencia: \n");
    scanf("%f", &exp);

    pot = pow(num, exp);

    printf("O numero %f elevado a %f potencia eh igual a %f", num, exp, pot);

    return 0;
}