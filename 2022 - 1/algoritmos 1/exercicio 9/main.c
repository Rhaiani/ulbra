#include <stdio.h>
#include <stdlib.h>

int main()
{
   float base, altura, area;
   printf("qual eh a base\n");
   scanf("%f%*c",&base);
   printf("qual eh altura\n");
   scanf("%f%*c",&altura);
   area=base*altura/2;
   printf("a area eh %2f\n",area);

    return 0;
}
