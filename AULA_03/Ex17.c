#include <stdio.h>
int main() {
int i[99], valor, pos = 0;
while(pos < 99){
    printf("Digite um numero: ");
    scanf("%i", &valor);
if (valor < 0) break;

        i[pos] = valor;
        pos++;
    }
    for (int j = 0; j < pos; j++) {
        printf("%d ", i[j]);
    }
}
