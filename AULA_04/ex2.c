#include <stdio.h>

int main() {

	int idade[15];
	int jovem = 0, adulto = 0, idoso = 0;

	for(int i = 0; i < 15; i++) {
		printf("Me fale a idade da %i pessoa: ", i + 1);
		scanf("%i", &idade[i]);
	}

	for(int i = 0; i < 15; i++) {
		if(idade[i] <= 17) {
			jovem++;
		} else if(idade[i] <= 59) {
			adulto++;
		} else {
			idoso++;
		}
	}

	printf("Jovens ate 17 anos: %i\n", jovem);
	printf("Adultos de 18 a 59 anos: %i\n", adulto);
	printf("Idosos 60 anos ou mais: %i\n", idoso);

	if(jovem > adulto && jovem > idoso) {
		printf("Os jovens sao maioria, com %i pessoas\n", jovem);
	} else if(adulto > idoso) {
		printf("Os adultos sao maioria, com %i pessoas\n", adulto);
	} else {
		printf("Os idosos sao maioria, com %i pessoas\n", idoso);
	}

	return 0;
}