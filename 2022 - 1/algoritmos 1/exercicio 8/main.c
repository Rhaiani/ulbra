#include <stdio.h>
#include <stdlib.h>

int main()
{
    float dep, taxa, rend, total;
    printf("qual o valor do deposito\n");
    scanf("%f%*c",&dep);
    printf("qual o valor das taxas de juros\n");
    scanf("%f%*c",&taxa);
    rend=dep*taxa/100;
    total=dep+rend;
    printf("o valor  o rendimento eh %.2f\n",rend);
    printf("o valor total  eh %.2f\n",total);

    return 0;
}
