#include <stdio.h>

int main() {
	int num1, num2;
	printf("Digite 1 numero: ");
	scanf("%i", &num1);

	printf("Digite um numero diferente: ");
	scanf("%i", &num2);
	
	
	
	if(num1 < num2) {
        
		for( int i = num1 ; i <= num2; i++){
			printf("%i\n", i);
		}
	}
	else {
		for( int i = num2; i <= num1; i++){
			printf("%i\n", i);
		}
	}
}