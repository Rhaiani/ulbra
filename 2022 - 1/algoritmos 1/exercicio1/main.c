#include <stdio.h>
#include <stdlib.h>
///faca um programa que receba 4 numeros inteiros e mostre a soma deles
int main()
{
    int num1, num2, num3, num4;
    int soma;
    printf("digite o primeiro numero\n");
    scanf("%d%*c",&num1);
    printf("digite o segundo numero\n");
    scanf("%d%*c",&num2);
    printf("digite o terceiro numero\n");
    scanf("%d%*c",&num3);
    printf("digite o quarto numero\n");
    scanf("%d%*c",&num4);
    soma=num1+num2+num3+num4;
    printf("esta e a soma dos numeros digitados e %d\n",soma);




    return 0;
}
