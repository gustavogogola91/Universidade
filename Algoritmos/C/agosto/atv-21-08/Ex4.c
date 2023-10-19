#include <stdio.h>

int main () {
	
	int idade;
	
	printf("Digite a idade da crianca: ");
	scanf("%i", &idade);
	
	if (idade < 4 || idade > 10) {
		
		printf("Infelizmente nao temos turmas para a idade de %i, lamentamos o inconveniente.", idade);
		
	} else if (idade <= 5) {
		
		printf("O aluno sera adicionado a turma A. Agradecemos o contato!");
		
	} else if (idade <= 8) {
		
		printf("O aluno sera adicionado a turma B. Agradecemos o contato!");
		
	} else {
		
		printf("O aluno sera adicionado a turma C. Agradecemos o contato!");
	};
	
	return 0;
}
