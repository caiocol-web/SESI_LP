/*
Maior entre dois numeros
*/

#include <stdio.h>
int main() {

	//CRIA VARIAVEL
	float num1,num2;

	//PERGUNTA O NUMERO
	printf("digite o 1 numero: ");
	scanf("%f", &num1);

	printf("digite o 2 numero: ");
	scanf("%f", &num2);

	//FAZ A CONTA

	if(num1 > num2) {
		printf("O 1 é maior!");
	}
	else if(num2 > num1) {
		printf("O 2 é maior!");
	}
	else {
		printf("São iguais");
	}
}
