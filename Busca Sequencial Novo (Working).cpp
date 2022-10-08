/*
    Pesquisa Sequencial ou Busca Linear
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int fPesquisa_Sequencial(int *pVetor, int pChave , int pQuantidade);

int main()
{
    int TAM = 500;
    int vVetor[TAM];
    int vAux;
    int vChave;

    srand(time(NULL));

    for (vAux=0; vAux<TAM; vAux++)
    {
        vVetor[vAux] = rand() % 100; // Preenche todo o vetor aleatóriamente de 0 a 100;
    }

    printf("\n Digite qual valor voce deseja procurar:");
    scanf("%d",&vChave);

    if ( fPesquisa_Sequencial(vVetor, vChave , TAM) != -1 )
        printf("\n Valor encontrado!\n\n "); // Se a função retornar diferente de -1 então foi encontrado;
    else // Senão não foi encontrado;
        printf("\n Valor nao encontrado!\n\n ");

    system("pause");
}

int fPesquisa_Sequencial(int *pVetor, int pChave , int pQuantidade)
{
     int vAux;

     for ( vAux=0; vAux < pQuantidade; vAux++ ) // Percorre todo o vetor;
     {
         if ( pChave == pVetor[vAux] ) // Testa se o valor que está passando é a "chave";
             return vAux; // Retorna a posição em que foi encontrado o valor;
     }

     return -1; // Retorna -1 se não for encontrado;
}
