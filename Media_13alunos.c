#include <stdio.h>
#include <stdlib.h>
#define max 13

int main(void)
{
char nome[max];
float nota1[max],nota2[max],media[max];
int i;
	for (i=0; i<max;i++)
	{
	printf("Entre com o nome do aluno: \n");
	scanf("%s",&nome[i]);
	printf("Entre com a Nota da Primeira prova : \n");
	scanf("%f",&nota1[i]);
	printf("Entre com a Nota da Segunda prova : \n");
	scanf("%f",&nota2[i]);
	media[i]=(nota1[i]+nota2[i])/2;
	printf("A media do aluno  ");
	printf("%c",nome[i]);
	printf("%f", media[i]);
}
return 0;
