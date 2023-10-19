#include <stdio.h>
#include <math.h>

#define PI 3.141592

int main () {
	
	float raio, altura, volume;
	
	printf("Digite o raio da lata: \n");
	scanf("%f", &raio);
	
	printf("Digite a altura da lata: \n");
	scanf("%f", &altura);
	
	volume = PI * pow(raio, 2.0) * altura;
	
	printf("O volume da lata eh %.2f", volume);
	
	return 0;
}

