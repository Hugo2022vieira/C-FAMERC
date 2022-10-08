#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#define MAX 100000

struct node{
       int chave;
       int altura;
       struct node*esq;
       struct node*dir;
       };
       
typedef struct node nodo;
int buscabinaria(int x,nodo**pt){
    int res;
    if(*pt==NULL)
    {
      res=0;
    }
    else
    {
        if(x==(*pt)->chave)
        {
         res=1;                   
        }
    else if(x<(*pt)->chave){
         if((*pt)->esq==NULL){
         res=2;
         }
    else{
         *pt=(*pt)->esq;
         res=buscabinaria(x,pt);
         }
    }
    else{
         if((*pt)->dir==NULL){
         res=3;
         }else{
               *pt(*pt)->dir;
               res=buscabinaria(x,pt);
               }
         }
    }
    retun res;
}

int inserenodo(int x,nodo**ptraiz){
    nodo*pt;
    nodo*ptnovo;
    pt=*ptraiz;
    int res;
    res=buscabinaria(x,&pt);
    if(res==1)
    {
              printf("\nInsercao invalida:%d\n",x);
              return 0;
              }
              else{
                   (ptnovo)=(nodo*)malloc(sizeof(nodo));
                   (ptnovo)->chave=x;
                   (ptnovo)->esq=NULL;
                   (ptnovo)->dir=NULL;
                   
                   if(res==0){
                   *ptraiz=ptnovo;
                   }
                   else if(res==2){
                        pt->esq=ptnovo;
                        }
                        else
                        pt->dir=ptnovo;
                        }
                        return 1;
                        }
 int main(){
     FILE*file;
     unsigned int a[MAX];
     unsigned int i,n=0;           
     log t_i,t_f;
     nodo*arvore=NULL;
     0;
     }
     file=open("lista.txt","r");
     for(i=0;i<MAX;i++)
     {
                       fscanf(file,"%d",&a[i]);
                       }
                       printf("comecando a coroa...\n");
                       t_i=time(NULL);
                       for(i=0;i<MAX;i++){
                                          if(inserenodo(a[i],&arvore)==1)
                                          n++;
                                          }
                                          
                                          t_f=time(NULL);
                                          printf("Levou %|d elementos\n",t_f-t_i,n);
                                          fclose(file);
                                          system("pause");
                                          return 0;
                                          }
