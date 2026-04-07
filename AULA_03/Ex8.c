#include <stdio.h>

int main() {
	int munt, num;
	printf("Digite o numero: ");
	scanf("%i", &num);

	for(int i= 1; i <= 10; i++) {
		munt = num * i;
		printf("%i * %i = %i \n", num, i, munt);
	}
}