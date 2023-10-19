#include <stdio.h>
#include <locale.h>

int main () {
	
	int a, b, aux, i, k;
	
	scanf("%d", &a);
	
	scanf("%d", &b);
	
	if (b < a) {
		aux = a;
		a = b;
		b = aux;
	};
			
	for(k = a; k <= b; k++) {
		printf("_______________________________________________\n");
		
		for(i=1; i<=10; i++){
			printf("%d X %d = %d\n",k, i, k*i);
		}
	}
	
	return 0;
}

