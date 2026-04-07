#include <stdio.h>

int main() {
    int numero;
    do {
        printf("Digite um número positivo: ");
        scanf("%d", &numero);
        if(numero <= 0) {
            printf("Número inválido! Tente novamente.\n");
        }
    } while(numero <= 0);

    printf("Você digitou: %d\n", numero);
    return 0;
}