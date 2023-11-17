#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[20];
    float rendaPerC;
    float idh;
    int pop;
}cidades;

int main() {
    int n, maiorPop = 0, flag = 0;
    float media = 0;	
    char nMaiorPop[20], cInput[20];
    printf("Quantas cidades serao cadastradas: ");
    scanf("%d", &n);
    cidades c[n];

    for(int i= 0; i < n; i++) {
        printf("Cidade %d\n", i+1);
        printf("Nome: ");
        fflush(stdin);
        scanf("%[^\n]s", c[i].nome);
        printf("Renda per capta: R$ ");
        scanf("%f", &c[i].rendaPerC);
        printf("IDH: ");
        scanf("%f", &c[i].idh);
        printf("Populacao: ");
        scanf("%d", &c[i].pop);
        printf("-------------------------------------------\n");
        
        media += c[i].rendaPerC;
        if(c[i].pop > maiorPop) {
            maiorPop = c[i].pop;
            for(int x = 0; x < 20; x++) {
                nMaiorPop[x] = c[i].nome[x];
            }
        }
    }

    media = media / n;

    printf("Media da renda per capta: R$ %.2f\n", media);
    printf("-------------------------------------------\n");
    printf("Cidade com maior populacao: %s\n", nMaiorPop);
    printf("-------------------------------------------\n");

    printf("Digite o nome de uma cidade: ");
    fflush(stdin);
    scanf("%[^\n]s", cInput);

    for(int x = 0; x < n; x++){
        flag = 0;
        for(int y = 0; y < strlen(c[x].nome); y++) {
            if(c[x].nome[y] != cInput[y]) {
                flag = 1;
                break;
            }
        }
        if(flag != 1){
            printf("-----------------------------------------------\n");
            printf("Cidade: %s\nRenda per capta: R$ %.2f\nIDH: %d\n Populacao: %d", c[x].nome, c[x].rendaPerC, c[x].idh, c[x].pop);

        } else {
            printf("-----------------------------------------------\n");
            printf("Cidade não encontrada!");
        }
    }

    return 0;
}
