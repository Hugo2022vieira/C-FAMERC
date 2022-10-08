#include<stdio.h>
#include <stdlib.h>
#include<conio.h>

int main(void)
{
    int number;
              
    printf("\nDigite um numero:");
    scanf("%d",&number);
        
    if(number % 2==0)
    {
        printf("\nO Numero %d e par.\n",number);
    }
    else
    {
        printf("\nO Numero %d e impar.\n",number); 
    }
    system("pause");
    
}  
