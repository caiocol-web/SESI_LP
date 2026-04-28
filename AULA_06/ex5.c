#include <stdio.h>

int main() {
	int matriz[3] [3];
	int somal[3] = {0};

	for(int l = 0; l<3; l++) {
		for(int c = 0; c < 3; c++) {
			printf("Digite o valor de Linha %i: \n Coluna %i: ", l+1,c+1);
			scanf("%i", &matriz[l][c]);
			somal[l] += matriz[l][c];
		}

	}
	for (int i=0; i<3; i++) {
		printf("A soma da %i linha eh: %i \n", i+1, somal[i]);
	}
}