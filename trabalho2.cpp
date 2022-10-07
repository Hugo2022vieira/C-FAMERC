#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>

# define M 10
int pilha[M],vet[M];
int fila[M];
int nf, np;
int op,i,r;

void ordena_pilha(int n)
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
              for(j=(i+1) ; j<np ; j++)
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

void ordena_fila(int n)
{
     int j,min,aux;
     if(nf<=0)
              {
                   printf("\nFila vazia.");
                   getch(); 
              }
              else
                  {
                            for(i=0;i<(nf-1);i++)
                            {
                                min = i;
                                for(j=(i+1);j<nf;j++)
                                    {
                                       if(fila[j]<fila[min])
                                       {
                                                 min = j;
                                       }
                                    }
                                    if(i!=min)
                                              {
                                                 aux = fila[i];
                                                 fila[i] = fila[min];
                                                 fila[min] = aux;
                                              }
                                }
                  }
}

void insere_pilha(int x)
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

void insere_fila(int x)
     {
         if(nf<M)
             {
                 printf("\nDigite um numero! ");
                 scanf("%d",&x);
                 fila[nf]=x;
                 nf=nf+1;}
                 else
                 {
                     printf("\nFila cheia");
                     getch();
                 }
               }

void remove_pilha()
     {
         if(np>0)
                 {
                   r=pilha[np];
                   np=np-1;
                   pilha[np]=0;}
             else
                 {
                   printf("\nPilha vazia.");
                   getch();
                 }
     }

void remove_fila()
{
      if(nf>0)
              {
                  r=fila[0];
               
                  for(i=0;i<nf;i++)
                      {
                          fila[i]=fila[i+1];}
                          nf=nf-1;
                          fila[nf]=0;
                      }
                      else
                      {
                          printf("\nFila vazia.");
                          getch();
                      }
               }

void mostra_fila()
     {
         for(i=0;i<M;i++)
         {
             printf("\n%d --> %d",i,fila[i]);
         }
     }

void mostra_pilha()
     {
         for(i=0;i<M;i++)
         {
             printf("\n%d --> %d",i,pilha[i]);
         }
     }

void ponteiros()
{
     int numero;
     int*pt;
     numero=10;
     pt=&numero;
     
     printf("conteudo do ponteiro pt %p\n",pt);
     printf("conteudo apontado por pt %d\n",pt);
     *pt=20;
     printf("conteudo da variavel numero %d\n",numero);
     printf("conteudo apontado por pt %p\n",pt);
     getch();
}


main()
{
      while(op!=10)
      {
                   printf("Digite uma opcao:\n");
                   printf("1.Insere Pilha\n");
                   printf("2.Insere Fila\n");
                   printf("3.Mostra Pilha\n");
                   printf("4.Mostra Fila\n");
                   printf("5.Ordena Pilha\n");
                   printf("6.Ordena Fila\n");
                   printf("7.Remove Pilha\n");
                   printf("8.Remove Fila\n");
                   printf("9.Exemplo de Ponteiros\n");
                   printf("10.Sair\n");
                   scanf("%d",&op);
                   switch(op){
                              case 1: 
                                   {    
                                        insere_pilha(M); 
                                        break;
                                   }
                                   
                              case 2: 
                                   {
                                      insere_fila(M); 
                                      break; 
                                   }
                                   
                              case 3: 
                                   {    
                                        printf("\nPilha:");
                                        mostra_pilha(); 
                                        break;
                                   }
                                   
                              case 4: 
                                   {    
                                        printf("\nFila:");
                                        mostra_fila(); 
                                        break; 
                                   }
                                   
                              case 5: 
                                   {
                                      ordena_pilha(M); 
                                      break; 
                                   }
                                   
                              case 6: 
                                   {
                                      ordena_fila(M); 
                                      break; 
                                   }
                                   
                              case 7: 
                                   {
                                      remove_pilha(); 
                                      break; 
                                   }
                                   
                              case 8: 
                                   {
                                      remove_fila(); 
                                      break; 
                                   }
                                   
                              case 9: 
                                   {
                                      ponteiros();
                                      break; 
                                   }
                                   
                              case 10: 
                                   {
                                      break; 
                                   }
                              
                              default: 
                                       {
                                             printf("\n\nEssa Opcao nao existe\nDigite uma opcao valida"); 
                                             break; 
                                       }
                              }
                   }


printf("\nPressione uma tecla para terminar");
getch();
}

