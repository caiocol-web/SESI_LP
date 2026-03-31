/*
Leia um ano e informe se é ano de eleição (múltiplo de 4).
*/

#include <stdio.h>

int main()
{
	//DECLARAR
	int ano;

//PERGUNTA

	printf("Qual o ano? ");
	scanf("%i", &ano);

//DESCOBRE

	if(ano % 4 == 0) {
		printf("tem eleiC'C#o");
	}
	else {
		printf("num tem eleiC'ao");
	}
}