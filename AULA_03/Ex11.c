#include <stdio.h>

int main() {
	long long num, fat = 1;

	printf("Digite um numero: ");
	scanf("%ld", &num);

	for(int i = 1; i <= num; i++) {
		fat *= i;
	}

	printf("O fatorial de %lld eh %lld ", num, fat );
}