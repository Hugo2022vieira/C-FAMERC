#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>
//#include <stdbool.h>
#include <time.h>

#define M 200000

int Vetor[M];           // Declaracao do Vetor Global

void troca(int x, int y)
{
     int aux;
     aux = Vetor[x];
     Vetor[x] = Vetor[y];
     Vetor[y] = aux;
}

void selection_sort(int n)
{
     int i,j,min;
     for(i=0 ; i<(n-1) ; i++)
     {
             min = i;
             for(j=(i+1) ; j<n ; j++)
             {
                         if(Vetor[j]<Vetor[min])
                         {
                                        min = j;
                         }
             }
             if(i != min) 
             {
                   troca(i, min);
             }
     }
}
                          

int main ()
{
int c;                  // Contador
int a;                  // amplitude
int s;                  // semente

time_t tempoI;          // guarda tempo inicial
time_t tempoF;          // guarda tempo final
time_t tempoU;          // Tempo Utilizado

printf ("Entre com amplitude:");
scanf  ("%d",&a);

printf ("\nEntre com semente:");
scanf  ("%d",&s);

 
srand(s);               // atribuição de semente

 
for(c=0;c<M;c++)
     Vetor[c] =  rand() % a;
     
//Mostrar vetor gerado
for(c=0;c<M;c++)
     printf("\n[%d] --> %d",c,Vetor[c]);      
 
 printf("\nPressione qualquer tecla para ver o vetor ordenado...");
 getch();

 printf("\n\n Aguarde... Vetor sendo ordenado...");
//Tomada de tempo (Inicial)
tempoI = time(NULL);
 
selection_sort(M); // Chamada da Funcao Selection Sort (ORDENANDO !!!)

//Tomada de tempo (Final)
tempoF = time(NULL);

//Mostrar vetor gerado

for(c=0;c<M;c++)
     printf("\n[%d] --> %d",c,Vetor[c]);       


printf("\n\nTempo gasto na ordenacao %f segundos\n", difftime(tempoF, tempoI));
 
printf("\nPressione qualquer tecla para terminar...");
getch();
return(0);
}
