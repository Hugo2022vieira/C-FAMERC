#include<stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<string.h>
int main(void)
{
    char cod[256];
    int i, quant;
    float total;
    
    printf("\nDigite o codigo do produto: ");
    gets(cod);
    if(cod=="abcd")
    {
        printf("\nDigite a quantidade: ");
        scanf("%d",&quant);
        total=quant*5.3; 
        printf("\nOvalor total e %f: \n",total);                  
    }
    else
    if (cod=="xypk")
    {
        printf("\nDigite a quantidade: ");
        scanf("%d",&quant);
        total=quant*6; 
        printf("\nO valor total e %f: \n",total);                  
    }
    else
    if(cod=="klmp")
    {
        printf("\nDigite a quantidade: ");
        scanf("%d",&quant);
        total=quant*3.2; 
        printf("\nO valor total e %f: \n",total);                  
    }
    else
    if(cod=="qrst")
    {
        printf("\nDigite a quantidade: ");
        scanf("%d",&quant);
        total=quant*2.5; 
        printf("\nO valor total e %f: \n",total);                  
    } 
    else
    {
        printf("\nCodigo invalido!\n"); 
    }
    system("pause");    
}  
