/*
Leia o peso de uma encomenda:
AtC) 5kg b R$10
5 a 20kg b R$20
Acima de 20kg b R$50
*/

#include <stdio.h>

int main()
{
	//DECLARAR

	float peso;

	//PERGUNTA

	printf("Qual eh o peso da sua encomenda(em kg): ");
	scanf("%f", &peso);

//DESCOBRE O VALOR

	if(peso <= 5) {
		printf("O preC'o eh R$10");
	}
	else if(peso <= 20) {
		printf("O preC'o eh R$20");
	}
	else {
		printf("O preC'o eh R$ 50");
	}
}