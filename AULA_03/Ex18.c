#include <stdio.h>

int main() {
	int idades[100];
	int i = 0;
	int valor;
	float soma = 0;
	float media;

	while (i < 100) {
		printf("Digite uma idade (0 para parar): ");
		scanf("%d", &valor);

		if (valor == 0) {
			break;
		}

		idades[i] = valor;
		soma += valor;
		i++;
	}

	if (i > 0) {
		media = soma / i;
		printf("Media das idades: %.2f\n", media);
	} else {
		printf("Nenhuma idade foi informada.\n");
	}
}
