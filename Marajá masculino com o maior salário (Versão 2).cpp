#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
#define tam 3

typedef struct{
        char nome[40];
        char sexo;
        float salario;
              }funcionario;
              
int main(void)

{
    
int i;
float maiorsal;
char maraja[40];
funcionario ficha;
    
maraja[0]=' ';
maiorsal=0;
    
for(i=0;i<tam;i++)
{
    printf("\nDigite o nome do funcionario: ");
    scanf("%s",&ficha.nome);
    
    printf("\nDigite o sexo do funcionario - M (Masculino) F (Feminino)");
    scanf("%s",&ficha.sexo);
    ficha.sexo=toupper(ficha.sexo);
    
    printf("\nDigite o salario do funcionario: ");
    scanf("%f",&ficha.salario);
    
    if(ficha.sexo=='M' && ficha.salario>maiorsal)
    {
    maiorsal=ficha.salario;
    strcpy(maraja,ficha.nome);
    }
}

    if(maraja[0]==' ')
    {
    printf("\nNao temos funcionario do sexo masculino.\n");
    }
    else
    {
    printf("\n%s ganha R$ %f e possui o maior salario.\n",maraja,maiorsal);
    }

system("pause");

}
