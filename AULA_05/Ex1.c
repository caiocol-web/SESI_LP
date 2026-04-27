//Leia 5 números inteiros e armazene em um vetor. Exiba todos os valores.//
#include <stdio.h>

int main()
{
	float num[5];

	for(int i = 0; i < 5; i++) {
		printf("Numero do %i aluno: ", i+1);
		scanf("%f", &num[i]);
	}
	for(int i = 0; i<5; i++) {
		printf("Aluno %i numero: %.2f\n",i+1, num[i]);
	}
}