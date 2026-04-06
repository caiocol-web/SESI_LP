#include <stdio.h>

int main(){
    char turma, turma1;
    float nota[100], nota1[100], soma = 0, soma1 = 0, maior, maior1, menor, menor1;
    int prova,prova1;
    
    printf("Digite sua turma: ");
    scanf(" %c", &turma);
    
    printf("Digite quantas provas voce realizou: ");
    scanf("%d", &prova);
    
    for(int i = 0; i < prova; i++){
        printf("Digite sua %dª nota: ", i + 1);
        scanf("%f", &nota[i]);
        soma += nota[i];
        
        if (i == 0){
            maior = nota[i];
            menor = nota[i];
        } else {
            if (nota[i] > maior) maior = nota[i];
            if (nota[i] < menor) menor = nota[i];
        }
    }

printf("Digite sua turma: ");
    scanf(" %c", &turma1);
    
    printf("Digite quantas provas voce realizou: ");
    scanf("%d", &prova1);
    
    for(int i = 0; i < prova1; i++){
        printf("Digite sua %dª nota: ", i + 1);
        scanf("%f", &nota1[i]);
        soma1 += nota1[i];
        
        if (i == 0){
            maior1 = nota1[i];
            menor1 = nota1[i];
        } else {
            if (nota1[i] > maior1) maior1 = nota1[i];
            if (nota1[i] < menor1) menor1 = nota1[i];
        }
    }
    if(prova > 0) {
        printf("\nRESULTADOS");
        printf("\nTurma: %c | Media: %.2f", turma, soma / prova);
        printf("\nMaior nota: %.2f", maior);
        printf("\nMenor nota: %.2f\n", menor);
    }
    if(prova1 > 0) {
        printf("\nRESULTADOS");
        printf("\nTurma: %c | Media: %.2f", turma1, soma1 / prova1);
        printf("\nMaior nota: %.2f", maior1);
        printf("\nMenor nota: %.2f\n", menor1);
    }
}

