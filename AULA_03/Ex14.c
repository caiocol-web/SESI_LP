#include <stdio.h>
int main() {

	int num;

	printf("Digite o numero: ");
	scanf("%i", &num);
	for(int i = num; i >= 0; i--) {
		printf("%i\n", i);
	}
}