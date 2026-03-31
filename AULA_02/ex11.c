/*
Leia dois nC:meros e verifique se o primeiro C) mC:ltiplo do segundo.
*/

#include <stdio.h>

int main() {

//DECLARAR VARIAVEL
	int num1, num2;

//PERGUNTA

	printf("Qual eh 1 o numero; ");
	scanf("%i", &num1);

	printf("Qual eh 2 o numero; ");
	scanf("%i", &num2);


//VERIFICA

	if(num2 % num1 == 0) {
		printf("%i eh muntiplo de %i", num2,num1);
	}
	else {
		printf("%i nao eh muntiplo de %i", num2,num1);
	}
}



