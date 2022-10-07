#include <stdio.h>
#include <stdlib.h>
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
            nf=nf+1;
    }
    else
    {
        printf("fila cheia");
    }
}

int remove_pilha(int x)
{
    int r;
    int np;
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
     int a,op;
	 op=0;
	 
	 while (op<7)
	 {
	 printf ("Escolha uma Opcao:");
     printf ("\n1.Insere pilha");
     printf ("\n2.Insere fila");
     printf ("\n3.Remove pilha");
     printf ("\n4.Remove fila");
     printf ("\n5.Mostrar pilha");
     printf ("\n6.Mostrar fila");
     printf ("\n7.Sair\n");
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
                    remove_pilha(x);
                 }
                 else
                 {
                     if (op=4)
                     {
                            remove_fila(x);
                     }
                     else
                     {
                         if (op=5)
                         {
                                mostrar_pilha(x);
                         }
                         else
                         {
                             if (op=6)
                             {
                                    mostrar_fila(x);
                             }
						 }
					 }
				 }
			 }
		 }
	 }
 }	 
