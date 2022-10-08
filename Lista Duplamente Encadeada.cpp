#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>

typedef struct dupla{
        int dado;
        struct dupla *elink, *dlink;
        }LDE; // Criação de uma struct para uma lista encadeada
        
        LDE *CRIALDE(int n)
        {
            LDE *p;
            LDE *inicio=NULL;
            int i, valor;
            
            for(i=1;i<=n;i++)
            {
                            printf("\nDigite o valor [%d] da lista: ",i);
                            scanf("%d",&valor);
                            p=(LDE*)malloc(sizeof(LDE));
                            p->dado=valor;
                            p->elink=NULL;
                            
                            if(inicio!=NULL)
                            inicio->elink=p;
                            p->dlink=inicio;
                            inicio=p;
                            }
                            return inicio;
                            }
                            
                            void escrevelista(LDE*p)
                            {
                                 while(p!=NULL)
                                 {
                                               printf("\t%d",p->dado);
                                               p=p->dlink;
                                               }
                                               }
                                               
                                               int main(void)
                                               {
                                                   LDE*primeira;
                                                   int n;
                                                   printf("Criando uma lista duplamente encadeada");
                                                   
                                                   do{
                                                                   printf("\nEntre com o numero de nos, valor maior ou igual a zero: ");
                                                                   scanf("%d",&n);
                                                                   }while(n<0);
                                                                   primeira=CRIALDE(n);
                                                                   
                                                                   if (primeira!=NULL)
                                                                   {
                                                                                      printf("\nLista Criada: ");
                                                                                      escrevelista(primeira);
                                                                                      }
                                                                                      else
                                                                                      printf("\nLista Vazia");
                                                                                      system("pause");
                                                                                      }
        
