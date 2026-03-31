/*
Leia peso e altura e calcule o IMC.
*/

#include <stdio.h>

int main() {
	//DECLARA VARIAVEL
	float peso, altura, imc;

//PERGUNTA O peso

	printf("qual eh o peso(em quilos): ");
	scanf("%f", &peso);

	printf("qual eh a altura(em metros): ");
	scanf("%f", &altura);

//FAZ A VERIFICACAO
	imc = (peso / (altura * altura));
	printf("%.2f",imc);

	if( imc < 18.5) {
		printf(" Abaixo do peso");
	}
	else if( imc < 25) {
		printf(" normal");
	}
	else if(imc < 30) {
		printf(" sobre peso");
	}
	else {
		printf(" obesidade");
	}
}



