#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>

typedef struct lista{
        int dado;
        struct lista*link;
        }no; //criação de uma STRUCT para uma lista encadeada
        
no*crialista(int n)
{
                 no*ini,*p,*ult;
                 int i,valor;
                 ini=ult=NULL;
                 for(i=1;i<=n;i++)
                 {
                                  printf("\nDigite o valor [%d] da lista: ",i);
                                  scanf("%d",&valor);
                                  p=(no*)malloc(sizeof(no));
                                  p->dado=valor;
                                  p->link=NULL;
                                  
                                  if(ult!=NULL)
                                    ult->link=p;
                                  else
                                    ini=p;
                                    ult=p;
                                    }
                                    ult->link=ini;
                                    return ini;
                                    }
                                    void escrevelista(no*p)
                                    {
                                         no*q;
                                         
                                         do
                                         {
                                             printf("\t%d",p->dado);
                                             q=q->link;
                                             }while(p!=q);
                                             }
                                             int main(void)
                                             {
                                                 no*primeira;
                                                 int n;
                                                 printf("Criando uma lista encadeada");
                                                 do{
                                                                 printf("\nEntre com o numero de nos, valor maior ou igual a zero: ");
                                                                 scanf("%d",&n);
                                                                 }while(n<0);
                                                                 primeira=crialista(n);
                                                                 
                                                                 if(primeira!=NULL)
                                                                 {
                                                                                   printf("\nLista Criada: ");
                                                                                   escrevelista(primeira);
                                                                                   }
                                                                                   else
                                                                                   printf("\Lista Vazia: ");
                                                                                   system("pause");
                                                                                   }
