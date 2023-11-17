#include <stdio.h>

typedef struct {
    char modelo[20];
    int anoFab;
    int tipoComb;// 0 para gas, 1 para flex, 2 para gasolina
    float valor;
    char placa[10];
    char renavam[20];
    float ipva;
}carros;

int main() {
    int n;
    printf("Quantos carros serao cadastrados: ");
    scanf("%d", &n);

    carros c[n];

    for(int i= 0; i < n; i++) {
        printf("Carro %d\n", i+1);
        printf("Modelo: ");
        fflush(stdin);
        scanf("%[^\n]s", c[i].modelo);
        printf("Ano fabricacao: ");
        scanf("%d", &c[i].anoFab);
        printf("Tipo Combustivel (0 = gas, 1 = flex, 2 = gasolina): ");
        scanf("%d", &c[i].tipoComb);
        printf("Valor: ");
        scanf("%f", &c[i].valor);
        printf("Placa: ");
        fflush(stdin);
        scanf("%[^\n]s", &c[i].placa);
        printf("Renavam: ");
        fflush(stdin);
        scanf("%[^\n]s", &c[i].renavam);
        printf("-------------------------------------------\n");
        
        if((2023 - c[i].anoFab) >= 20) {
            c[i].ipva = 0;
        } else {
            if(c[i].tipoComb == 0) {
                c[i].ipva = c[i].valor * 1 / 100;
            } else if(c[i].tipoComb == 1) {
                c[i].ipva = c[i].valor * 2 / 100;
            } else if(c[i].tipoComb == 2) {
                c[i].ipva = c[i].valor * 4 / 100;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        printf("Modelo: %s\nPlaca: %s\nRenavam: %s\n",c[i].modelo, c[i].placa, c[i].renavam);
        if(c[i].ipva == 0) {
            printf("Valor IPVA: Isento\n");
        } else {
            printf("Valor IPVA: R$ %.2f", c[i].ipva);
        }
    }

}
