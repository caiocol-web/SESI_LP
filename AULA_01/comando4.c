#include <stdio.h>

int main(){
    
 float nota1, nota2, nota3, media;
 printf("Digite a 1º nota: ");
 scanf("%f", &nota1);
  
 printf("Digite a 2º nota: ");
 scanf("%f", &nota2);
 
 printf("Digite a 3º nota: ");
 scanf("%f", &nota3);
 
 media = (nota1 + nota2 + nota3) / 3;
 
 if (media >= 7.0){
     printf("Você aprovou com a media: %2.f",media);
 }
 else if (media >= 3.0){
     printf("Você está de recuperação com a media de: %2.f", media);
 }
 else{
     printf("Você reprovou com a media de: %.2f",media);
 }
 }