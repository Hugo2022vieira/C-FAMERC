#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define tam 10

int main()
{ 
    int v[tam];
    int i,inicio,meio , fim ;
    int num; //número a ser buscado.
    printf("\nPreencha o vetor na forma ordenada\n");
    for(i=0;i<10;i++)
    { 
                     printf("insira o elemento %d do vetor\n",i+1);
                     scanf("%d",&v[i]);
    }
    printf("\nInsira o numero que deseja fazer a busca binaria\n");
    scanf("%d",&num); 
    inicio=0;
    fim=9;
 
    if(v[inicio]==num){
    printf("o numero encontrado no indice %d\n",inicio);
    }
    else 
    if(v[fim]==num){
    printf("o numero encontrado no indice %d\n",fim);
    }
    else
        {
        while(inicio<fim)
        { 
                         meio=(inicio+fim)/2; //aqui no caso irei separar o valor do quociente para pegar somente a parte inteira.
        if ( v[meio]==num)
        { printf("o numero encontrado no indice %d\n",meio);break;
        }
        else 
        if(num>v[meio])
        { 
                       inicio=meio+1;
        }
        else
        { 
            fim=meio;
        }
    } 
} 
printf("\nPressione uma tecla para sair\n");
system("pause");
fflush(stdin);
return 0;
}
