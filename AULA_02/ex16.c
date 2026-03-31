/*

*/

#include <stdio.h>

int main()
{
    //DECLARAR
    float consumo, valor;
    
    //PERGUNTA
    
    printf("Qual foi o consumo de kWh: ");
    scanf("%f", &consumo);
    
    //CONTA
    
    if (consumo <= 100){
        valor = consumo * 0.50;
        printf("O valor foi de: %.2f", valor);
    }
    else if(consumo <=200){
        valor = consumo * 0.75;
        printf("O valor foi de: %.2f", valor);
    }
    else{
        valor = consumo * 1;
        printf("O valor foi de: %.2f", valor);
    }
}