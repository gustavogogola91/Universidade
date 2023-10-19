#include <stdio.h>

int main () {

    float celsius, fahrenheit

    printf("Digite uma temperatura em celsius: \n");
    scanf("%f", &celsius);

    fahrenheit = ((9.0/5.0)* celsius + 32);

    printf("O valor %f em celsius equivale a %f fahrenheit", celsius, fahrenheit);


    return 0;
}