#include <stdio.h>
int main() {

	int num[99], soma = 0, valor = -1, i = 0;
	while(valor != 0) {
		printf("Digite numeros que voce quer somar( 0 termina a conta): ");
		scanf("%i", &valor);
		num[i] = valor;
		i++;
	}
	for (int j = 0; j < i - 1; j++) {
		soma += num[j];
	}
	soma += valor;
	printf("soma eh: %i", soma);
}