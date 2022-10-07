#include<stdio.h>
#include<conio.h>
int main()
{
     int numero;
     int *pt;
     numero=10;
     pt=&numero;
     printf("\n Conteudo do ponteiro pt%p",pt);
     printf("\n Conteudo do apontado por pt%d",*pt);
     //alterando o valor da variavel numero
     *pt=20;
     printf("\n Conteudo da variavel numero%d",numero);
     printf("\n Conteudo apontado por pt%p",*pt);
     getch();
}
