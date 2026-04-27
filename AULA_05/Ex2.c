// Leia 10 números e mostre apenas os números pares.//
#include <stdio.h>

int main()
{
	int num[10];

	for(int i = 0; i <10; i++) {
		printf("Digite seu %i numero: \n", i+1);
		scanf("%i", &num[i]);

	}
	printf("EH PAR OU IMPAR:\n");
	for(int i = 0; i < 10; i++) {
		if(num[i] % 2 == 0) {
			printf("\n%i eh par\n", num[i]);
		}
		else {
			printf("\n%i eh impar\n", num[i]);
		}
	}

}