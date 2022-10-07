#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>


#define M 5









int Pilha [M];
int Fila [M];
int nf;
int np;

void insere_pilha (int x)
{
     if(np<M)
     {
           Pilha [np]=x;
           np++;
     }
     else
     {
           printf("Pilha Cheia");
     }
}

int insere_fila(int x)
{
    if(nf<M)
    {
            Fila[nf]=x;
            nf++;
    }
    else
    {
            printf("Fila Cheia");
    }
}

int remove_pilha()
{
    int r;
    if(np>0)
    {
            r=Pilha[np-1];
            np--;
    }
    else
    {
        printf("Pilha Vazia");
    }
    return(r);
}

int remove_fila()
{
    int r, i;
    if(nf>0)
    {
            r=Fila[0];
            for(i=0; i<nf-1; i++)
            Fila[i]=Fila[i+1];
            nf--;
    }
        else
        {
            printf("Fila Vazia");
        }
      return(r);  
}



int main ()
{

int c;

//Mostrar vetor gerado
printf("\n---------------------------------------");
for(c=0;c<np;c++)
     printf("\n[%d] --> %d",c,Pilha[c]);   
     


insere_pilha(10);
insere_pilha(20);
     
//Mostrar vetor gerado
printf("\n---------------------------------------");
for(c=0;c<np;c++)
     printf("\n[%d] --> %d",c,Pilha[c]);   
     
remove_pilha();

//Mostrar vetor gerado
printf("\n---------------------------------------");
for(c=0;c<np;c++)
     printf("\n[%d] --> %d",c,Pilha[c]);   
     
 
printf("\nPressione qualquer tecla para terminar...");
getch();
return(0);
}
