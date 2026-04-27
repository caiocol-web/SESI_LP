//Leia 10 números e exiba apenas os valores maiores que a média.//

#include <stdio.h>

int main() {
	float val[10];
	float quantmedia = 0;

	for(int i = 0; i < 10; i++) {
		printf("Digite o %i valor: ", i+1);
		scanf("%f", &val[i]);
		if(val[i] >= 7) {
			quantmedia++;
		}
	}
	printf("A quantidade acima da media eh: %.1f", quantmedia);

}