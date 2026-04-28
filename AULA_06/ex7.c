#include <stdio.h>

int main() {
	int matriz[5] [5];
	int soma = 0;

	for(int l = 0; l<5; l++) {
		for(int c = 0; c < 5; c++) {
			printf("Digite o valor de Linha %i: \n Coluna %i: ", l+1,c+1);
			scanf("%i", &matriz[l][c]);
		}
	}
	for(int i = 1; i< 5; i++) {
		soma += matriz[i-1][i];
	}
	printf(" A soma eh:| %i |",soma);
}