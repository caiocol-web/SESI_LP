/*
Leia trC*s valores e verifique se podem formar um triC"ngulo.
Caso formem, classifique como:
EquilC!tero
IsC3sceles
Escaleno
*/

#include <stdio.h>
int main() {

	//DECLARA VARIAVEL
	float n1,n2,n3;

	//PERGUNTA OS VALORES
	printf(" Digite o 1 lado: ");
	scanf("%f", &n1);

	printf(" Digite o 2 lado: ");
	scanf("%f", &n2);

	printf(" Digite o 3 lado: ");
	scanf("%f", &n3);

//DETERMINA O triangulo
	if(n1 == n2 && n2== n3) {
		printf("eh Equilatero");

	}
	else if
	(n1 == n2 || n2 == n3 || n1 == n3) {
		printf("eh Isosceles");
	}
	else if
	(n1 != n2 && n2 != n3 && n1 != n3) {
		printf("eh Escaleno");
	}
	else {
		printf("num eh triangulo");
	}
}


