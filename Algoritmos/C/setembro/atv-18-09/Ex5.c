#include <stdio.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	int sex_input, altura_input, maior = 0, menor = 0, i;
	float media_m = 0, media_pop = 0,num_h = 0, num_m = 0, percentual_h;
	
	for (i = 0; i < 50; i++){
		printf("Digite o sexo: ");
		scanf("%d", &sex_input);
		
		printf("Digite a altura:(em cm) ");
		scanf("%d", &altura_input);
		
		media_pop += altura_input;
		
		if(sex_input == 0) {
			num_h++;
			
		} else if (sex_input == 1) {
			num_m++;
			media_m += altura_input;
		}
		
		if(maior == 0){
			maior = altura_input;
		} else if(altura_input > maior){
			maior = altura_input;
		}
		
		if(menor == 0){
			menor = altura_input;
		} else if(altura_input < menor){
			menor = altura_input;
		}
	};
	
	percentual_h = (num_h / 10.0)*100;
	media_m = media_m / num_m;
	media_pop = media_pop / 10.0;
	
	printf("A maior altura encontrada foi: %d cm\nA menor foi: %d cm\nA média de altura das mulheres foi: %.1f cm\nA media da população foi: %.1f cm \nA percentagem de homens foi: %.1f\%%"
	,maior,menor,media_m,media_pop,percentual_h);
	return 0;
}
