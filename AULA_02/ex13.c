/*
Leia dois nC:meros e verifique se o primeiro C) mC:ltiplo do segundo.
*/

#include <stdio.h>

int main() {

//DECLARAR VARIAVEL
	char ope;
	float num1, num2, oper;

//PERGUNTA

	printf("Digite o 1 numero: ");
	scanf("%f", &num1);

	printf("Digite o 2 numero: ");
	scanf("%f", &num2);

	printf("Digite o operator(+,-,* ou /): ");
	scanf(" %c", &ope);

//FAZ A OPERACAO

	switch(ope ) {
	case '+':
		oper = num1 + num2;
		printf("%.2f, pois %.2f + %.2f == %.2f", oper,num1,num2,oper);
		break;

	case '-':
		oper = num1 - num2;
		printf("%.2f, pois %.2f - %.2f == %.2f", oper,num1,num2,oper);
		break;

	case '*':
		oper = num1 * num2;
		printf("%.2f, pois %.2f * %.2f == %.2f", oper,num1,num2,oper);
		break;

	case '/':
		oper = num1 / num2;
		printf("%.2f, pois %.2f / %.2f == %.2f", oper,num1,num2,oper);
		break;

	default:
		printf("operador ou numero invalido");

	}
}



