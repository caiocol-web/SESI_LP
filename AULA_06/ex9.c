#include <stdio.h>

int main() {
	int matriz[5] [5];

	for(int l = 0; l<5; l++) {
		for(int c = 0; c < 5; c++) {
			printf("Digite o valor de Linha %i: \n Coluna %i: ", l+1,c+1);
			scanf("%i", &matriz[l][c]);
			if (matriz[l][c] < 0) {
				matriz[l][c] = 0;
			}
		}

	}
	for (int i=0; i<5; i++) {
		for(int j = 0; j<5; j++) {
			printf("| %i |", matriz[i][j]);
		}
		printf("\n");
	}
}