#include <stdio.h>

int main() {

    int arr[10], i;

    for(i = 0; i < 10; i++) {
    	printf("Digite o valor na posicao %d: ", i);
        scanf("%d", &arr[i]);
    }

    for(i = 9; i >= 0; i--) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
