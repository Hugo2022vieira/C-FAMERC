#include<stdio.h>
#include<sdtlib.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
#define tam 50

typedef struct {
        char nome[40];
        char sexo;
        float salario;
        }funcionario

int main(void)
{
    int i;
    float maiorsal;
    char maraja[40];
    funcionario ficha;
    
    maraja[0]='';
    maiorsal=0.0;
    
    for(i=0;i<tam;i++)
    {
     printf("Digite o nome do funcionario");
     gets(ficha.nome);
     printf("\nDigite o sexo do funcionario - M(Masculino)\nF(Feminino)\n");
     ficha.sexo=toupper(getchar());
     printf("\nDigite o salario");
     scanf("%f",&ficha.salario);
     
     if(ficha.sexo=='M'&&ficha.salario>maiosal)
     {
      maiorsal=ficha.salario;
      strcpy(maraja,ficha.nome);
     }
}
if maraja(maraja[0]=='')
printf("\nNao temos funcionario do sexo masculino");
else
printf("%s ganha R$ %f",maraja,maiorsal);
system("pause");
return 0;
}
