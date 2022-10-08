#include<stdio.h>
#include<stdlib.h>
#define tam 10

void shellSort(int vet[tam],int size){
     int i,j,value;
     int gap=1;
     do{
         gap=3*gap+1;
         }while(gap<size);
         do{
            gap/=3;
            for(i=gap;i<size;i++){
            value=vet[i];
            j=i-gap;
            
            while(j>=0&&value<vet[j]){
            vet[j+gap]=vet[j];
            j-=gap;
            }
            vet[j+gap]=value;
            }
            }while(gap>1);
            }
            int main(void)
            {
                int vetor[tam];
                vetor[0]=10;
                vetor[1]=8;
                vetor[2]=9;
                vetor[3]=5;
                vetor[4]=6;
                vetor[5]=4;
                vetor[6]=7;
                vetor[7]=2;
                vetor[8]=3;
                vetor[9]=1;
                
            shellSort(vetor,tam);
            
            for(int i=0;i<tam;i++){
                    printf("%d",vetor[i]);
                    }
                    printf("\n");
                    system("pause");
                    }
