#include <stdio.h>

int main(void) {
	int x;
	
	printf("digite um numero: ");
	scanf("%d", &x);

	if (x >= 10) {
		printf("o numero %d eh maior ou igual a 10", x);
	} else {
		printf("o numero %d eh menor que 10");
	}

	return 0;
}