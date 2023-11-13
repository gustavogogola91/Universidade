#include <stdio.h>

typedef struct {
    char nome[50];
    float altura;
} pessoas;

int main() {

    pessoas p[5];

    float med = 0;

    for(int i = 0; i < 5; i++) {
        printf("Pessoa %d\n", i);
        printf("Digite o nome: ");
        fflush(stdin);
        scanf("%[^\n]s", p[i].nome);

        printf("Digite a altura: ");
        scanf("%f", &p[i].altura);

    }

    printf("Pessoas com menos de 1.5m\n");
    for(int i = 0; i < 5; i++) {
        
        if(p[i].altura <= 1.50 ) {
            printf("Pessoa %d\n", i);
            printf("Nome: %s\n", p[i].nome);
            printf("Altura: %.2f\n", p[i].altura); 
        }

    }

    printf("Pessoas com mais de 1.5m\n");
    for(int i = 0; i < 5; i++) {
        
        if(p[i].altura >= 1.50 ) {
            printf("Pessoa %d\n", i);
            printf("Nome: %s\n", p[i].nome);
            printf("Altura: %.2f\n", p[i].altura); 
        }

    }

    printf("Pessoas com mais de 1.5m e menos de 1.8m\n");
    for(int i = 0; i < 5; i++) {
        
        if(p[i].altura >= 1.50 && p[i].altura < 1.80) {
            printf("Pessoa %d\n", i);
            printf("Nome: %s\n", p[i].nome);
            printf("Altura: %.2f\n", p[i].altura); 
        }

    }

    for(int i = 0; i < 5; i++) {
        
        med += p[i].altura; 

    }
    med = med / 5;

    printf("Media: %.2f\n", med);

    printf("Pessoas com altura maior q a media\n");
    for(int i = 0; i < 5; i++) {
        
        if(p[i].altura > med) {
            printf("Pessoa %d\n", i);
            printf("Nome: %s\n", p[i].nome);
            printf("Altura: %.2f\n", p[i].altura); 
        }

    }
}