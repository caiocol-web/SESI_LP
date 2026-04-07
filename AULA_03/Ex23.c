#include <stdio.h>

int main() {
    printf("Números entre 1 e 100 divisíveis por 3 e 5:\n");
    for(int i = 1; i <= 100; i++) {
        if(i % 3 == 0 && i % 5 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}