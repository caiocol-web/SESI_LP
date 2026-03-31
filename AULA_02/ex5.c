/*
Leia o valor de uma compra:
Se for maior que R$100 → desconto de 10%
Caso contrário → desconto de 5%
Exiba o valor final.
*/

#include <stdio.h>
int main() {

//DECLARA VARIAVEL
float compra, soma;

//PERGUNTA QUAL O VALOR DA COMPRA

printf("Qual foi o valor da compra? ");
scanf("%f", &compra);

//Ve qual desconto vai ser aplicado

if ( compra > 100){
    soma = compra - (compra * 0.1);
    printf("O valor da conta foi de R$%.2f",soma);
}
else{
    soma = compra - (compra * 0.05);
    printf("O valor da conta foi de R$%.2f",soma);
    
}
}


