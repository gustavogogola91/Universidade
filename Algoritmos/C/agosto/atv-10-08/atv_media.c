#include <stdio.h>

int main () {

        float nota1, nota2, nota3, media;

        printf("Digite a primeira nota: \n");
        scanf("%f", &nota1);

        printf("Digite a segunda nota: \n");
        scanf("%f", &nota2);

        printf("Digite a terceira nota: \n");
        scanf("%f", &nota3);

        media = (((nota1 * 2.0) + (nota2 * 3.0) + (nota3 * 5.0))/10.0);


        printf("A media final foi de %f", media);



    return 0;
}