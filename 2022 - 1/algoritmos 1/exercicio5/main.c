#include <stdio.h>
#include <stdlib.h>

int main()
{
   ///Faça um programa que recaba um salario de funcionario e um percentual de aumento, calcule e mostre o valor de um aumento de um novo salario

    float salario, percentual, aumento, novosalario;
    printf("digite o salario do funcionario\n");
    scanf("%f%*c", &salario);
    printf("digite o percentual do aumento\n");
    scanf("%f%*c",& percentual);
    aumento=salario*percentual/100;
    novosalario=salario+aumento;
    printf("o novo salario eh %.2f",novosalario);




    return 0;
}
