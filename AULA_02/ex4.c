/*
VerificaC'C#o de AprovaC'C#o
Leia a nota de um aluno (0 a 10).
Informe:
Aprovado (nota >= 7)
RecuperaC'C#o (nota entre 5 e 6.9)
Reprovado (nota < 5)
*/

#include <stdio.h>
int main() {

//DECLARA VARIAVEL
	float n1;

	//PERGUNTA A nota
	printf ("Digite sua nota: ");
	scanf("%f", &n1);

	//DETERMINA SE O ALUNO pASSOU

	if(n1 >=7 ) {
		printf("Passou");

	}
	else if( n1 >= 5) {
		printf("Recuperacao");
	}
	else {
		printf("Reprovado");
	}
}


