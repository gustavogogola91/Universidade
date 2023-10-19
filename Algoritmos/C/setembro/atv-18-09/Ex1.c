#include <stdio.h>

int main () {
	
	int i, flag;
	
	for(i = 0; i <= 1000; i++){
		flag = i % 7;
		if(flag == 0) {
			printf("%d\n", i);
		}
	}
	
	return 0;
}
