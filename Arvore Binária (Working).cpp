#include<stdio.h> 
#include<stdlib.h>
#include<conio.h>
struct arvore 
{ 
char info; 
struct arvore *esquerda; 
struct arvore *direita; 
}; 
 

struct arvore *raiz;

/*estrutura que cria uma arvore binaria*/ 
struct arvore *sarvore(struct arvore *raiz,struct arvore *r, char info) 
{ 
 if(!r){ 
 r=(struct arvore*)malloc(sizeof(struct arvore));//disponibiliza memoria para a arvore 
       if(!r) { 
       printf("Falta de memoria"); 
       exit(0); 
       } 
       r->esquerda=NULL; 
       r->direita=NULL; 
       r->info=info; 
       if (!raiz)return r;//primeira entrada 
       if(info<raiz->info) raiz->esquerda=r; 
       else raiz->direita=r; 
       return r; 
       } 
    if (info<r->info) sarvore(r,r->esquerda,info); 
   else 
 sarvore(r,r->direita,info); 
}

//estrutura para fazer o delete 
struct arvore *darvore(struct arvore *raiz,char elemento) 
{ 
 struct arvore *p,*p2; 
 if(!raiz) return raiz; //nÆo encontrado 
 if(raiz->info==elemento) //delete raiz, significa uma arvore vazia 
  { 
   if (raiz->esquerda==raiz->direita) 
    { 
     free(raiz); 
     return NULL; 
    } 
  //ou se um filho e nulo 
  else if(raiz->esquerda==NULL) 
  { 
  p=raiz->direita; 
  free(raiz); 
  return p; 
  } 
  else if(raiz->direita==NULL) 
  { 
  p=raiz->esquerda; 
  free(raiz); 
  return p; 
  }

  //ou se existem dois filhos

  else 
  { 
  p2=raiz->direita; 
  p=raiz->direita; 
  while(p->esquerda) p=p->esquerda; 
  p->esquerda=raiz->esquerda; 
  free(raiz); 
  return p2; 
  } 
 

  }

 if(raiz->info<elemento) 
 raiz->direita=darvore(raiz->direita,elemento); 
 else raiz->esquerda=darvore(raiz->esquerda,elemento); 
 return raiz;

} 
  
  
  
  
 

//estrutura para fazer o procurar 
struct arvore *procurar_arvore(struct arvore *raiz, char elemento) 
{ 
if(!raiz) return raiz; //arvore vazia 
while(raiz->info!=elemento){ 
if(raiz==NULL)break; 
   if(elemento<raiz->info) 
    raiz=raiz->esquerda;

   else raiz = raiz->direita; 
 

        } 
return raiz;

} 
 

void retirar(){ 
char c,a; 
  
 

printf("\nescreva um no a retirar: "); 
scanf("%c",&a);

   if (procurar_arvore(raiz,a))//faz o procurar do no 
    { 
     printf("encontrou\n"); 
     raiz=darvore(raiz,a);     //retira o no 
     printf("o no foi retirado\n"); 
     printf("\nArvore: \n"); 
//     imprimirarvore(raiz,NULL);

    } 
    else 
    { 
      printf("\nNÆo foi encontrado");

    }

   printf("\n\rQuer continuar?(Se nao. Clique em enter e n)\n"); 
   scanf("%c",&c); 
      if(c=='n') 
      exit(0); 
      else retirar();

  } 
  
  
 

int main(void) 
{

char s[80],a,b,c;

raiz=NULL; //inicializar a raiz 
do{ 
printf("\nEscreva uma letra ou numero[enter para finalizar as insercoes]:\n"); 
gets(s); 
if (!raiz) raiz=sarvore(raiz,raiz,*s); 
else sarvore(raiz,raiz,*s);

}while (*s); 
retirar();

}
