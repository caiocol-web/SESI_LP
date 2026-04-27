// Leia 10 números e mostre a média dos valores.//

#include <stdio.h>

int main() {
	float val[10];
	float media = 0, soma = 0;

	for(int i = 0; i < 10; i++) {
		printf("Digite o %i valor: ", i+1);
		scanf("%f", &val[i]);
		soma += val[i];
	}
	media = soma/10;
	printf("A media eh: %f", media);

}