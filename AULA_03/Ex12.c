#include <stdio.h>
int main() {

	int contador = 0;
	for(int i = 0; i <= 50; i++) {
		if(i % 2 == 0) {
			contador++;
		}
	}
	printf("%i numeros sao par", contador );
}