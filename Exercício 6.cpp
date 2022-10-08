#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
    
int main(void) 
{
       int i, num, soma;
           
       soma=0;    
           
       for(i=1;i<=50;i++)
       {
           printf("\nDigite o %d",i);
           printf(" Numero: ");
           scanf("%d",&num);                 
           soma=(soma+num);
       }    
       printf("\nO Somatorio dos numeros e: %d\n",soma);
       system("pause");
}
