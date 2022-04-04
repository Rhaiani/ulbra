#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, salreceber, imposto;
    printf("digite o salario\n");
    scanf("%f%*c",& salario);
    imposto=salario*0.10;
    salreceber=salario+50-imposto;
    printf("o salario a receber pelo funcionario eh %.2f\n",salreceber);
    return 0;
}
