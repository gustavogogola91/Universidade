#include <stdio.h>

int main () {
	
	int a, b, c, perimetro;
	
	printf("Digite um valor inteiro positivo: ");
	scanf("%i", &a);
	
	printf("Digite outro valor inteiro positivo: ");
	scanf("%i", &b);
	
	printf("Digite mais um valor inteiro positivo: ");
	scanf("%i", &c);
	
	if (a < (b + c) && b < (a + c) && c < (b + a)) {
		perimetro = a + b + c;
		printf("Com estes valores eh possivel fazer um triangulo com um perimetro de: %i.\n", perimetro);
		
		if ( a == b && b == c) {
			printf("Este triangulo eh equilatero!");
		} else if ( a != b && b != c && a != c) {
			printf("Este triangulo eh escaleno!");
		} else {
			printf("Este triangulo eh isosceles!");
		}
		
	} else {
		printf("Estes valores nao podem formar um triangulo!");
	}
}

