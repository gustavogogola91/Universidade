#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
    int anos_exp;
    float salario;
    char cargo[25];
}func;

int main() {
    int n, maiorXp = 0;
    float idadeM = 0, maiorS = 0;
    char nMaiorXp[50], nMaiorC[25];

    printf("Informe a quantidade de funcionarios que serao cadastrados:");
    scanf("%d", &n);

    func f[n];

    for(int i = 0; i < n; i++) {
        printf("Funcionario %d\n", i+1);
        printf("Nome: ");
        fflush(stdin);
        scanf("%[^\n]s", f[i].nome);
        printf("Idade: ");
        scanf("%d", &f[i].idade);
        printf("Anos de experiencia: ");
        scanf("%d", &f[i].anos_exp);
        printf("Salario: ");
        scanf("%f", &f[i].salario);
        printf("Cargo: ");
        fflush(stdin);
        scanf("%[^\n]s", f[i].cargo);

        idadeM += f[i].idade;

        if(f[i].anos_exp > maiorXp) {
            maiorXp = f[i].anos_exp;
            for(int x; x < 50; x++){
                nMaiorXp[x] = f[i].nome[x];
            }
        }

        if(f[i].salario > maiorS) {
            maiorS = f[i].salario;
            for(int x = 0; x < 25; x++) {
                nMaiorC[x] = f[i].cargo[x];
            }
        }
    }

    idadeM = idadeM / n;
    printf("-----------------------------------------------------\n");
    printf("Idade media: %.2f\n", idadeM);
    printf("-----------------------------------------------------\n");
    printf("Funcionario com maior experiencia: %s\n", nMaiorXp);
    printf("-----------------------------------------------------\n");
    printf("Cargo do funcionario com maior salario: %s", nMaiorC);

    return 0;
}