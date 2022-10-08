#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(void)
{
    char nome[20];
    int i, idade;
         
    for(i=1;i<=100;i++)
    {
        printf("\nInforme o nome do Cliente: ");  
        scanf("%s",&nome);   
        printf("\nInforme a idade do Cliente: ");
        scanf("%d",&idade);
        
        if(idade<=18)
        {
            printf("\nValor do plano de saude e: 80,00 Reais(R$)\n");                
        }
        else 
        if(idade>18 && idade<=30)
        {
            printf("\nValor do plano de saude e: 120,00 Reais(R$)\n");                
        } 
        else 
        if(idade>30 && idade<=45)
        {
            printf("\nValor do plano de saude e: 155,00 Reais(R$)\n");                
        }
        else 
        if(idade>45 && idade<=65)
        {
            printf("\nValor do plano de saude e: 240,00 Reais(R$)\n");                
        } 
        else
        if (idade >=66)
        {
            printf("\nValor do plano de saude e:400,00 Reais(R$)\n");
        }
    }
    system("pause");
    
    
}  
