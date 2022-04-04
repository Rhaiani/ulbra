#include <stdio.h>
#include <stdlib.h>

int main()
{
    ///Faça um programa que receba o salario base de um funcionario calcule e mostre o salario a receber, sabendo-se que o funcionario tem gratificação de 5% sobre o salario base e paga imposto de 7% tambem sobre o salario base.

      float salariobase, salarioreceber, gratificacao, imposto;
    printf("digite o salariobase\n");
    scanf("%f%*c", & salariobase);
    gratificacao=salariobase*0.05;
    imposto=salariobase*0.07;
    salarioreceber=salariobase+gratificacao-imposto;
    printf("o novo salario eh %.2f",salarioreceber);



    return 0;
}
