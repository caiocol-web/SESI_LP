// Leia 8 números e calcule a soma de todos os elementos do vetor.//
#include <stdio.h>

int main()
{
	float num[8];
	float soma = 0;

	for(int i = 0; i < 8; i++) {
		printf("Digite o %i a ser somado: ", i+1);
		scanf("%f", &num[i]);
		soma += num[i];
	}
	printf("A soma dos 8 numeros eh: %2.f", soma);
}