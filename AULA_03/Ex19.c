#include <stdio.h>

int main() {
	int numero;
	int maior = -999990;

	printf("Digite nC:meros (999 para parar):\n");

	while (1) {
		scanf("%d", &numero);
		if (numero == 999) {
			break;
		}
		if (numero > maior) {
			maior = numero;
		}
	}

	if (maior != -2147483648) {
		printf("O maior nC:mero digitado foi: %d\n", maior);
	} else {
		printf("Nenhum nC:mero vC!lido foi digitado.\n");
	}

	return 0;
}
