/*
úmero Positivo, Negativo ou Zero
Leia um número e informe se ele é:
Positivo
Negativo
Zero
*/

#include <stdio.h>

int main() {
	//DECLARA VARIAVEL
	float num;

	//PERGUNTA O NUMERO

	printf("Digite um numero: ");
	scanf("%f", &num);

	//VERIFICA

	if( num > 0) {
		printf("eh positivo");
	}
	else if(num < 0) {
		printf("eh negativo");
	}
	else {
		printf("eh zero");
	}
}


