#include <stdio.h>
#include <stdlib.h>
///
int main()
///Fa�a um programa que receba tr�s notas, calcule e mostre a m�dia aritm�tica.

{
    int nota1, nota2, nota3;
    int soma;
    int media;
    printf("digite a primeira nota\n");
    scanf("%d%*c",&nota1);
    printf("digite a segunda nota\n");
    scanf("%d%*c",&nota2);
    printf("digite a terceira nota\n");
    scanf("%d%*c",&nota3);
    soma=nota1+nota2+nota3;
    media=soma/3;
    printf("esta e a media das notas digitadas e %d\n",media);


    return 0;
}
