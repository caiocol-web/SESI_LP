// Leia 6 números e mostre o maior valor.//
#include <stdio.h>

int main()
{
	float num[6];
	float maiornum = 0;

	for(int i = 0; i < 6; i++) {
		printf("Digite o %i numero: ", i+1);
		scanf("%f", &num[i]);
		if(num[i] >= maiornum) {
			maiornum = num[i];
		}
	}
	printf("O maior numero eh: %f ", maiornum);

}