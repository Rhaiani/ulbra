#include <stdio.h>
#include <stdlib.h>
///faça um programa que receba três notas e seus respectivos pesos,calcule e mostre a média ponderada.

int main()
{
   int nota1, nota2, nota3, peso1, peso2, peso3;
   int soma;
   int somapeso;
   int media;

   printf("digite a nota1\n");
   scanf("%d%*c",&nota1);
   printf("digite a nota2\n");
   scanf("%d%*c",&nota2);
   printf("digite a nota3\n");
   scanf("%d%*c" ,&nota3);
   printf("digite o peso1\n");
   scanf("%d%*c",&peso1);
   printf("digite o peso2\n");
   scanf("%d%*c",&peso2);
   printf("digite o peso3\n");
   scanf("%d%*c" ,&peso3);

   soma=nota1*peso1+nota2*peso2+nota3*peso3;
   somapeso=peso1+peso2+peso3;
   media=soma/somapeso;

   printf("a media ponderada e %d",media);
    return 0;
}
