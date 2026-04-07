#include <stdio.h>

int main() {
	for( int i = 0; i<5; i++) {
		printf("%i Bom dia! \n", i);
	}

	int y = 0;
	printf("\n");
	while(y < 5) {
		printf("%i Boa tarde!\n", y);
		y++;
	}
	int x = 5;
	printf("\n");
	do {
		printf("%i Boa noite!\n", x);
		x--;
	} while(x > 0);
}