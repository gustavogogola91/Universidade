#include <stdio.h>

int main () {
	
	float nota_1, nota_2, nota_3, nota_4, media, nota_exam;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &nota_1);
	
	printf("Digite a segunda nota: ");
	scanf("%f", &nota_2);
	
	printf("Digite a terceira nota: ");
	scanf("%f", &nota_3);
	
	printf("Digite a quarta nota: ");
	scanf("%f", &nota_4);
	
	nota_1 *= 2;
	nota_2 *= 3;
	nota_3 *= 4;
	nota_4 *= 1;
	
	media = (nota_1 + nota_2 + nota_3 + nota_4) / 10.0;
	
	printf("Media : %.1f\n", media);
	
	if (media >= 7.0) {
		printf("Aluno aprovado.");
	} else if ( media < 5.0) {
		printf("Aluno reprovado.");
	} else {
		printf("Aluno em exame.\n");
		printf("Digite a nota do exame: ");
		scanf("%f", &nota_exam);
		
		media = (media + nota_exam) / 2;
		if (media >= 5.0) {
			printf("Aluno aprovado.");
		} else {
			printf("Aluno reprovado.\n");
			}
		printf("Media final: %.1f.", media);
	}
	
	return 0;
	
}
