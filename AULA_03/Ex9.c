#include <stdio.h>

int main() {
	int num;

	printf("Digite seu numero: ");
	scanf("%i", &num);

	for(int i = 1; i < num; i++) {
		printf("%i, ", i);
	}
}