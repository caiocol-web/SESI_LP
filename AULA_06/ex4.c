#include <stdio.h>

int main() {
	int matriz[4] [4];
	int maiorqdez = 0;

	for(int l = 0; l<4; l++) {
		for(int c = 0; c < 4; c++) {
			printf("Digite o valor de Linha %i: \n Coluna %i: ", l+1,c+1);
			scanf("%i", &matriz[l][c]);
			if(matriz[l][c]> 10) {
				maiorqdez++;
			}
		}
	}
	printf("Quantidade maior q Dez: %i", maiorqdez);
}