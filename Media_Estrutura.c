#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
typedef struct ficha
{
        int mat;
        char turno;
        int nota[4];
        float media;
} Tficha;

Tficha aluno[5];
int i, j;
float media;
int soma;
int main()
 {   
    for(i=0;i<5;i++)
    {
    soma=0;
    printf("\n Digite a matricula");
    scanf("%d",&aluno[i].mat);
    printf("\n Digite o turno");
    scanf("%s",& aluno[i].turno);
                             for(j=0;j>4;j++);
                             {
                             printf("\n Digite a nota");
                             scanf("%d",& aluno[i].nota[j]);
                             soma=soma+aluno[i].nota[j];
                             }
                             media=soma/4;
                             if (media>=7)
                             {
                                        printf("\n Aluno Aprovado");
                             } 
                             else
                             {
                                        printf("\n Aluno Reprovado");
                             }          
}
}
