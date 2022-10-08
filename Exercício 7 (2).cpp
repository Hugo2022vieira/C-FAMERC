#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    
FILE *f = fopen("saida.txt", "w");
int n, acum,aux;

aux=1;
acum=0;

       while (aux<=4)
       {
          aux++;
          n=3*aux;
          acum+=n;
       }
       fprintf(f, "%d\n", acum);
       fclose(f);
}
