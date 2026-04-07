#include <stdio.h>
#include <string.h>

int main() {
    char senha[20];          
    const char senha_correta[] = "12345";  

    do {
        printf("Digite a senha: ");
        scanf("%19s", senha);
        if (strcmp(senha, senha_correta) != 0) {
            printf("Senha incorreta. Tente novamente.\n");
        }
    } while (strcmp(senha, senha_correta) != 0);

    printf("Senha correta! Acesso permitido.\n");

    return 0;
}