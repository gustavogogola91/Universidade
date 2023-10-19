#include <stdio.h>

int main () {
	
	int senha_correta, cpf_correto, senha_usuario, cpf_usuario;
	
	cpf_correto = 12345678910;
	senha_correta = 31072023;
	
	printf("Digite o cpf: ");
	scanf("%i", &cpf_usuario);
	
	printf("Digite a senha: ");
	scanf("%i", &senha_usuario);
	
	if (cpf_correto == cpf_usuario && senha_usuario == senha_correta) {
		printf("Acesso liberado! Seja bem vindo");
	} else {
		printf("Acesso negado, tente novamente");
	}
	
	return 0;
}
