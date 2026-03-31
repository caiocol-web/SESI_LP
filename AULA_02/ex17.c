/*
Leia uma temperatura:
Frio (< 15°C)
Agradável (15–25°C)
Quente (> 25°C)
*/

#include <stdio.h>

int main()
{
	//DECLARAR
	float temp;

//PERGUNTA

	printf("Qual eh a temperatura: ");
	scanf("%f", &temp);

//VERIFICA

	if(temp<15) {
		printf("ta frio");

	}
	else if(temp < 25) {
		printf("Ta deboas");
	}
	else {
		printf("calor");
	}
}