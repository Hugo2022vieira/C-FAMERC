#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>

# define M 6
int pilha[M],vet[M];
int fila[M];
int nf, np;
int op,i,r;

void ordena_pilha(int n)
{
     int j,min,aux;
     if(np<=0){
               printf("\nPilha vazia.");
               getch(); }
               else{
                    for(i=0;i<(np-1);i++){
                            min = i;
                            for(j=(i+1) ; j<np ; j++){
                                        if(pilha[j]<pilha[min]){
                                                   min = j;
                                        }
                            }
                            if(i!=min){
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

void inserir_pilha(int x)
{
     if(np<M){
             printf("\nDigite um numero! ");
             scanf("%d",&x);
             pilha[np]=x;
             np=np+1;
             }
             else {
                  printf("\nPilha cheia.");
                  getch(); 
             }
}

void inserir_fila(int x){
     if(nf<M){
              printf("\nDigite um numero! ");
              scanf("%d",&x);
              fila[nf]=x;
              nf=nf+1;}
              else{
                   printf("\nFila cheia");
                   getch();
              }
}

void remove_pilha(){
    if(np>0){
             r=pilha[np];
             np=np-1;
             pilha[np]=0;}
             else{
                  printf("\nPilha vazia.");
                  getch();
             }
}

void remove_fila(){
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

void mostra_fila(){
     for(i=0;i<M;i++){
                      printf("\n%d --> %d",i,fila[i]);}
}

void mostra_pilha(){
     for(i=0;i<M;i++){
                      printf("\n%d --> %d",i,pilha[i]);}
}

main()
{
      while(op!=9){
                   printf("\n\nEscolha uma opcao!!!\n\n1 - Inserir na Pilha\n\n2 - Inserir na Fila\n\n3 - Mostra Pilha\n\n4 - Mostra Fila\n\n");
                   printf("5 - Ordena Pilha\n\n6 - Ordena Fila\n\n7 - Remover da Pilha\n\n8 - Remover da Fila\n\n9 - Sair\n\n");
                   scanf("%d",&op);
                   switch(op){
                              case 1: {    //inserir pilha
                                   inserir_pilha(M); break;}
                                   
                              case 2: {    //inserir fila
                                   inserir_fila(M); break; }
                                   
                              case 3: {    //mostra pilha
                                   printf("\nPilha:");
                                   mostra_pilha(); break;}
                                   
                              case 4: {    //mostra fila
                                   printf("\nFila:");
                                   mostra_fila(); break; }
                                   
                              case 5: {    //ordena pilha
                                   ordena_pilha(M); break; }
                                   
                              case 6: {    //ordena fila
                                   ordena_fila(M); break; }
                                   
                              case 7: {    // remove pilha
                                   remove_pilha(); break; }
                                   
                              case 8: {    // remove fila
                                   remove_fila(); break; }
                                   
                              case 9: {    //sair
                                   break; }
                                   
                              default: {
                                   printf("\n\nOpcao invalida!!!"); 
                                   break; }
                              }
                   }


printf("\nPressione uma tecla para terminar!");
getch();
}

