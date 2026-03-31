/*
Leia dois nC:meros e verifique se o primeiro C) mC:ltiplo do segundo.
*/

#include <stdio.h>

int main() {

//DECLARAR VARIAVEL
	float sal, novo;

//PERGUNTA

	printf("qual eh o salario: ");
	scanf("%f", &sal);

//OPERRACAO

	if(sal > 3000) {
		novo = (sal * 0.05) + sal;
		printf("seu salario e agr de: %.2f", novo);
	}
	else {
		novo = (sal * 0.10) + sal;
		printf("seu salario e agr de: %.2f", novo);

	}
}



