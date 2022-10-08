#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>

typedef struct pilha{
        int dado;
        struct pilha*link;
        }no; //Criação de uma struct para uma lista encadeada
        
        no*inserefila(no**ini,no**fim, int valor)
        {
         no*q;
         q=(no*)malloc(sizeof(no));
         q->dado=valor;
         q->link=NULL;
         if(*ini==NULL)
         *ini=q;
         
        else
        (*fim)->link=q;
        *fim=q;
        }
        
        int retirafila(no**ini,no**fim)
        {
            int aux;
            no*p;
            p=*ini; //aponta para o 1º no da lista
            aux=p->dado;
            *ini=(*ini)->link;
            free(p);
            if(*ini==NULL)
            *fim=NULL;
            return aux;
        }
        
        int main(void)
        {
            int valor;
            char resp;
            no *ini, *fim;
            ini=fim=NULL;
            for(;;)
            {
                   printf("\nDigite o valor a ser enfileirado:");
                   scanf("%d",&valor);
                   getchar();
                   inserefila(&ini,&fim,valor);
                   printf("\nDeseja continuar?\nDigite S para sim e N para não:");
                   resp=toupper(getchar());
                   if(resp=='N')
                   break;
            }
            
            printf("\nElemento retirado: %d",retirafila(&ini,&fim));
            for(;;)
            {
                   printf("\nElemento retirado: %d",retirafila(&ini,&fim));
                   if(ini==NULL)
                   {
                                printf("\nFila Dinamica Vazia\n\n");
                                break;
                                }
                                }
                                system("pause");
                                }
