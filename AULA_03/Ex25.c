#include <stdio.h>

int main() {
    int valor;
    printf("Digite o valor a sacar: ");
    scanf("%d", &valor);

    int notas[] = {100, 50, 20, 10, 5, 1};
    int quantidade;

    printf("Notas necessárias:\n");
    for(int i = 0; i < 6; i++) {
        quantidade = valor / notas[i];
        valor %= notas[i];
        if(quantidade > 0) {
            printf("%d nota(s) de %d\n", quantidade, notas[i]);
        }
    }

    return 0;
}