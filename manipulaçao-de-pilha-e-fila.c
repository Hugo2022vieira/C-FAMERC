#include<stdio.h>
#include<conio.h>

// vetor de 6 posições.

// pilha -> LIFO = primeiro que entra é o primeiro que sai.
// fila -> FIFO = último que entra é o ultimo que sai.

op=0;
	while (op<7)
	{

	// programa principal:
	// Digite a sua opção:
	// (1) Inserir na pilha;
	// (2) inserir na fila;
	// (3) remove da pilha;
	// (4) remove da fila;
	// (5) Mostrar Fila;
	// (6) Mostrar pilha;
	// (7) Sair.
	}

int pilha [M];
int fila [m];
int nf=0;
int np=0;

// inicio da Função inserir na pilha.

{
void insere-pilha (int x)
	{
	pilha[np]=x;
	np=np+1;
	}
	else
	{
	printf ("A pilha está Cheia!");
	}
}
// fim da função inserir na pilha.

// inicio da função inserir da fila.
{
voide insere-fila (int x)
	{
	if(nf<M)
	{
	fila [nf]=x;
	nf=nf+1;
	}
	else
	{
	printf ("A fila está cheia!);
	}
}
// fim da função inserir da fila.


//inicio da função remover da pilha.
{
	int r;
	if (np>0)
	{
	r=pilha[np-1];
	}
	else
	printf ("A Pilha está Vazia!");
	return(r);
}
// fim da função remover da pilha.

// inicio da função remover da fila.
{
	int r,1;
	if(nf>0)
	{
	r=fila[0];
	for (i=0; i<nf-1; i++);
		fila[i]=fila[i+1];
	nf=nf-1;
	}
	else
	{
	printf ("A fila está Vazia!");
	}
	return(r);
}
// Fim da função remover da fila.
