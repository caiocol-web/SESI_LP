//Leia um vetor de 6 posições e encontre o segundo maior valor.\\

#include <stdio.h>

int main()
{
	float val[6];
	float maiorval = 0, maior2 = 0;

	for(int i = 0; i<6; i++) {
		printf("Digite o %i valor: ", i+1);
		scanf("%f", &val[i]);
	}
	for(int i = 0; i<6; i++) {
		if(val[i] > maiorval) {
			maiorval= val[i];
		}
	}
	for(int i = 0; i < 6; i++) {
		if(val[i] < maiorval) {
			if(val[i] > maior2)
			{
				maior2 = val[i];
			}
		}
	}
	printf("%f e %f",maiorval, maior2);
}