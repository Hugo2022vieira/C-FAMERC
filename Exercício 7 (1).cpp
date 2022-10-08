#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(void)
{
    int n, acum,aux;

    aux=1;
    acum=0;

       while (aux<=4)
       {
          aux++;
          n=(3*aux);
          acum=(acum+n);
       }
       printf("%d\n",acum);
       system("pause");
}
