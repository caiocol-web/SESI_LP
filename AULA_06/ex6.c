#include <stdio.h>
#include <float.h>

int main() {
	int matriz[4] [4];
	float menor = FLT_MAX;
	int maior = 0;

	for(int l = 0; l<4; l++) {
		for(int c = 0; c < 4; c++) {
			printf("Digite o valor de Linha %i: \n Coluna %i: ", l+1,c+1);
			scanf("%i", &matriz[l][c]);
			if(matriz[l][c] > maior) {
				maior = matriz[l][c];
			}
			if(matriz[l][c] < menor) {
				menor = matriz[l][c];
			}
		}
	}
	printf("O menor eh: %f \n E o maior eh: %i", menor,maior);
}