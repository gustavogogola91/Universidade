#include <stdio.h>

int main() {
	
	char input[50];
	int i;
	
	fgets(input, 50, stdin);
	
	for(i = strlen(input) - 1; i >= 0; i--) {
		printf("%c", input[i]);
	}
	
	return 0;
}
