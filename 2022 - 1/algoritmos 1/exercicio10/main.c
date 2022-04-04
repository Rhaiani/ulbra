#include <stdio.h>
#include <stdlib.h>

int main()
{
  float area, raio;
  printf("digite o raio\n");
  scanf("%f%*c",&raio);
  area=3.1415*raio;
  printf("minha area eh %.2f\n",area);

   return 0;
}
