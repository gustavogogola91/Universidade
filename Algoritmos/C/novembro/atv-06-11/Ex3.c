#include <stdio.h>



int main() {
	int option, flag = 0;
	while(1){
		printf("Selecione uma opcao:\n[1]Comprar um produto\n[2]Finalizar Compra\n");	
		scanf("%d", &option);
		
		switch(option) {
			case 1:
				
				break;
			
			case 2:
				flag = 1;
				break;
			default:
				printf("Codigo nao encontrado!\n");
				break;
		}
		if(flag == 1) {
			break;
		}
	}
	
}
