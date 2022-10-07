#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>
#define M 10

int pilha[M],fila[M],vet[M];
int i,r,op;
int np,nf;

int ordena_pilha(int n)
{
     int j,min,aux;
     if(np<=0)
     {
               printf("\nPilha vazia.");
               getch(); 
     }
               else
               {
                    for(i=0;i<(np-1);i++)
                    {
                            min = i;
                            for(j=(i+1) ; 
                            j<np ; j++)
                            {
                                        if(pilha[j]<pilha[min])
                                        {
                                                   min = j;
                                        }
                            }
                            if(i!=min)
                            {
                                 aux = pilha[i];
                                 pilha[i] = pilha[min];
                                 pilha[min] = aux;
                            }
                    }
               }
}


int ordena_fila(int n)
{
     int j,min,aux;
     if(nf<=0){
              printf("\nFila vazia.");
              getch(); }
              else{
                   for(i=0;i<(nf-1);i++){
                           min = i;
                           for(j=(i+1);j<nf;j++){
                                       if(fila[j]<fila[min]){
                                                 min = j;
                                       }
                           }
                           if(i!=min){
                                aux = fila[i];
                                fila[i] = fila[min];
                                fila[min] = aux;
                                }
                   }
              }
}


int insere_pilha(int x)
{
    if(np<M)
    {
             printf("\nDigite um numero! ");
             scanf("%d",&x);
             pilha[np]=x;
             np=np+1;
    }
             else 
             {
                  printf("\nPilha cheia.");
                  getch(); 
             }
}

int insere_fila(int x)
{
    if(nf<M)
    {
              printf("\nDigite um numero! ");
              scanf("%d",&x);
              fila[nf]=x;
              nf=nf+1;}
              else{
                   printf("\nFila cheia");
                   getch();
    }
}

int remove_pilha(int x)
{
    if(np>0)
    {
             r=pilha[np];
             np=np-1;
             pilha[np]=0;
    }
             else
             {
                  printf("\nPilha vazia.");
                  getch();
             }
}

int remove_fila(int x)
{
   if(nf>0){
               r=fila[0];
               
               for(i=0;i<nf;i++){
                          fila[i]=fila[i+1];}
                          nf=nf-1;
                          fila[nf]=0;
               }
               else{
                    printf("\nFila vazia.");
                    getch();
               }
}

int mostrar_pilha(int x)
{
	for (i=0;i<M;i++)
	printf("\n[%d] --> %d",i,pilha[i]);
}
int mostrar_fila(int x)
{
	for (i=0;i<M;i++)
	printf("\n[%d] --> %d",i,fila[i]);
}

int main()
{
     int pilha[M],fila[M]; 
     int nf,np,a,i,r,op;
	 op=0;
	 
	 while (op!=9)
	 {
	 printf ("Escolha uma Opcao:\n");
     printf ("1.Ordena pilha\n");
     printf ("2.Ordena fila\n");
     printf ("3.Insere pilha\n");
     printf ("4.Insere fila\n");
     printf ("5.Remove pilha\n");
     printf ("6.Remove fila\n");
     printf ("7.Mostrar pilha\n");
     printf ("8.Mostrar fila\n");
     printf ("9.Sair\n");
     scanf ("%d",&op);
	 	       
     if (op=1) 
         {
             printf("Entre com valor");
             scanf("%d",&a);
             ordena_pilha(M);
         }
         else
         {
     if (op=2) 
         {
             printf("Entre com valor");
             scanf("%d",&a);
             ordena_fila(M);
         }
         else
         {
     
         if (op=3) 
         {
             printf("Entre com valor");
             scanf("%d",&a);
             insere_pilha(M);
         }
         else
         {
             if (op=4)
             {
                printf("Entre com valor");
                scanf("%d",&a);
                insere_fila(M);
             }
             else
             {
                 if (op=5)
                 {
                    printf("Entre com valor");
                    scanf("%d",&a);
                    remove_pilha(M);
                 }
                 else
                 {
                     if (op=6)
                     {
                            printf("Entre com valor");
                            scanf("%d",&a);
                            remove_fila(M);
                     }
                     else
                     {
                         if (op=7)
                         {
                                printf("Entre com valor");
                                scanf("%d",&a);
                                mostrar_pilha(M);
                         }
                         else
                         {
                             if (op=8)
                             {
                                    printf("Entre com valor");
                                    scanf("%d",&a);
                                    mostrar_fila(M);
                             }
                             else
                             {
                             if (op=9)
                             {
                                                                 
                             }
                             printf("\nPressione qualquer tecla para terminar...");
                             getch();
                             return(0);
						 }
					 }
				 }
			 }
		 }
   }
}
}
}
}

