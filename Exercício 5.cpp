#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
    
int main(void) 
{
       int i, mat;
       float n1, n2, med;
    
       for(i=0;i<50;i++)
       {
           printf("\nDigite a Matricula do Aluno: \n");
           scanf("%d",&mat);                 
           printf("\nDigite a nota 1: \n");
           scanf("%f",&n1);
           printf("\nDigite a nota 2: \n");
           scanf("%f",&n2);
           med=(n1+n2)/2;
           if(med>=6)
           {
              printf("\nAluno Aprovado\n", med);
           }
           else
           {
           printf ("\nAluno Reprovado\n", med);
           }
        }
        system("pause");
}

