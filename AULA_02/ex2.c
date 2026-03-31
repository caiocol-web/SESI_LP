/*
Leia um número inteiro e informe se ele é par ou ímpar.
*/

#include <stdio.h>

int main(){
    // CRIA VARIAVEL
    
    int num;
    
    //PERGUNTA O NÚMERO
    
    printf("Digite um numero: ");
    scanf("%i", &num);
    
    //FAZ A CONTA E RETORNA A RESPOSTA
    
    if (num % 2 == 0){
        printf("é par");
        
    }
    else {
        printf("é impar");
    }
}