#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>

typedef struct pilha{
        
        int dado;
        
        struct pilha*link;
        
        }no;
        
        no*inserefrente(no*p, int valor)
        
        {
           no *q;
           
           q=(no*)malloc(sizeof(no));
           
           q->link=p;
           
           q->dado=valor;
           
           return q;
           
        }
        
        int retirafrente(no**p)
        
        {
            
            int aux;
            
            no*q;
            
            aux=(*p)->dado;
            
            q=*p; 
            
            *p=q->link;
            
            free(q);
            
            return aux*aux;
            
        }
        
        
int main(void)

{
    int valor;
    int n,i;
    no*ptr;
    ptr=NULL;
    printf("Entre com o numero de nos:");
    scanf("%d",&n);
     for (i=0;i<n;i++)
     {
       printf("\nDigite o valor a ser empilhado:");      
       scanf("%d",&valor);
       ptr=inserefrente(ptr,valor);      
     }  
     
     for (i=0;i<n;i++)
     {
       printf("\nO quadrado do elemento retirado e : %d",retirafrente(&ptr));
     }
    system("pause");
               
}
