#include<stdio.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>
#define M 10

int pilha[M],fila[M];
int nf,np,a,i,r,op,x;

int insere_pilha(int x)
{
    int np=0;
	if(np<M)
    {
            pilha[np]=x;
            np=np+1;
    }
    else
    {
        printf("pilha cheia");
    }
}

int insere_fila(int x)
{
    if(nf<M)
    {
            fila[nf]=x;
            nf=nf++;
    }
    else
    {
        printf("fila cheia");
    }
}

int remove_pilha(int x)
{
    int r;
    if (np>0)
    {
             r=pilha[np-1];
             np=np-1;
    }
    else
    printf ("pilha vazia");
    return (r);
}

int remove_fila(int x)
{
    int r,i;
    if (nf>0)
    {
             r=fila[0];
             for (i=0;i<nf-1;i++)
             fila[i]=fila[i+1];
             nf=nf-1;
    }
    else
    {
        printf("fila vazia"); 
    }
    return(r);
}
int mostrar_pilha(int x)
{
	int i=0;
	for (i=0;i<M;i++)
	printf("\n[%d] --> %d",i,pilha[i]);
}
int mostrar_fila(int x)
{
	int i=0;
	for (i=0;i<M;i++)
	printf("\n[%d] --> %d",i,fila[i]);
}

int main()
{
     int pilha[M],fila[M]; 
     int nf,np,a,i,r,op;
	 op=0;
	 
/*	 while (op<7)
	 {
	 printf ("Escolha uma Opcao:");
     printf ("1.Insere pilha");
     printf ("2.Insere fila");
     printf ("3.Remove pilha");
     printf ("4.Remove fila");
     printf ("5.Mostrar pilha");
     printf ("6.Mostrar fila");
     printf ("7.Sair");
     scanf ("%d",&op);
	 
	 if (op=1) 
         {
             printf("Entre com valor");
             scanf("%d",&a);
             insere_pilha(a);
         }
         else
         {
             if (op=2)
             {
                printf("Entre com valor");
                scanf("%d",&a);
                insere_fila(a);
             }
             else
             {
                 if (op=3)
                 {
                    printf("Entre com valor");
                    scanf("%d",&a);
                    remove_pilha(a);
                 }
                 else
                 {
                     if (op=4)
                     {
                            printf("Entre com valor");
                            scanf("%d",&a);
                            remove_fila(a);
                     }
                     else
                     {
                         if (op=5)
                         {
                                printf("Entre com valor");
                                scanf("%d",&a);
                                mostrar_pilha(a);
                         }
                         else
                         {
                             if (op=6)
                             {
                                    printf("Entre com valor");
                                    scanf("%d",&a);
                                    mostrar_fila(a);
                             }
						 }
					 }
				 }
			 }
		 }
	 */}	 
