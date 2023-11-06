#include <stdio.h>
#include <math.h>

double calc(double base, double exp) {
	return pow(base, exp);
}

int main() {
	double x, y, result;
	
	do {
		printf("Digite a base: ");
		scanf("%lf", &x);	
	} while(x < 0);
	
	do {
		printf("Digite o expoente: ");
		scanf("%lf", &y);	
	} while(y < 0);
	
	result = calc(x, y);
	
	printf("%.2lf elevado a %.2lf eh igual a %.2lf",x, y, result);
}
