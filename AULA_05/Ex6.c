//Leia 10 números e conte quantos são positivos.//

#include <stdio.h>

int main() {

	float num[10];
	int quantpositivo = 0;

	for(int i = 0; i < 10; i++) {
		printf("Digite o %i numero: ", i+1);
		scanf("%f", &num[i]);
		if(num[i] >=  0) {
			quantpositivo++;
		}
	}
	printf("A quantidade de numeros positivos eh: %i", quantpositivo);
}