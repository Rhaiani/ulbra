#include <stdio.h>
#include <stdlib.h>

///Faça um  programa que receba o salário de um funcionario,calcule e mostre o novo salário, sabendo-se que este sofreu um aumento de 25%

int main()
{
    float salario, novosalario;

    printf("digite o salario do funcionario\n");
    scanf("%f%*c", &salario);
    novosalario=salario*1.25;
    printf("novo salario e %.2f\n",novosalario);

    return 0;
}
