#include <stdio.h>

int main() {
    int opcao;

    do {
        // Exibe o menu
        printf("\nMenu:\n");
        printf("1: Dizer \"Olá\"\n");
        printf("2: Dizer \"Tudo bem?\"\n");
        printf("3: Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        // Executa ação de acordo com a opção
        switch(opcao) {
            case 1:
                printf("Olá!\n");
                break;
            case 2:
                printf("Tudo bem?\n");
                break;
            case 3:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }

    } while(opcao != 3); // Repete até o usuário escolher sair

    return 0;
}