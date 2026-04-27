//Leia 10 números e substitua os negativos por zero.//

#include <stdio.h>

int main() {
	float num[10];

	for(int i = 0; i < 10; i++) {
		printf("Digite o %i valor: ", i+1);
		scanf("%f", &num[i]);
		if(num[i] < 0) {
			num[i] = 0;
		}
	}
	for(int i = 0; i < 10; i++) {
		printf("\n%i num: %f\n", i+1, num[i]);
	}
}