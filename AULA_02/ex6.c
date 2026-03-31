/*
Leia um ano e informe se ele C) bissexto ou nC#o.
*/

#include <stdio.h>
int main() {

//DECLARA VARIAVEL
	int ano;

//PERGUNTA O ano
	printf("Qual eh o ano: ");
	scanf("%i", &ano);

//DESCOBRE SE o ANO e bissexto

	if((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
		printf("%i C) bissexto", ano);
	}
	else {
		printf("%i nao C) bissexto", ano);
	}

}


