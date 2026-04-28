#include <stdio.h>

int main() {
	int matriz[2] [2];
	int matrizz[2][2];
	int soma = 0;
	int soma2 = 0;

	for(int l = 0; l<2; l++) {
		for(int c = 0; c < 2; c++) {
			printf("Digite o valor de Linha %i: \n Coluna %i: ", l+1,c+1);
			scanf("%i", &matriz[l][c]);
			soma += matriz[l][c];
		}
	}

	printf("\n");
	printf("SEGUNDA MATRIZ");
	printf("\n");

	for(int l = 0; l<2; l++) {
		for(int c = 0; c < 2; c++) {
			printf("Digite o valor de Linha %i: \n Coluna %i: ", l+1,c+1);
			scanf("%i", &matrizz[l][c]);
			soma2 += matrizz[l][c];
		}
	}
	printf("A muntiplicação das matrizes eh: %i", (soma2*soma));
}