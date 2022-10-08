#include <cstdlib>
#include <iostream>

using namespace std;

//Função gnomeSort
void gnomeSort(int elements, int arr[]) 
{
    int i = 0, temp;
	
	while( i < elements ){
           
           if ( i == 0 || arr [i - 1] <= arr[i] )
              i++;
           
           else{
                temp = arr[i];
                arr[i] = arr[i - 1];
                arr[--i] = temp;
           }//Fim senão (else)
           
    }//Fim enquanto (while)
          
}//Fim Função gnomeSort

int main(int argc, char *argv[])
{
    //Teste de dados
    int test[] = {6, 4, 2, 3, 1, 5, 8};
    
    cout << "***Algoritmo Gnome Sort***" <<endl <<endl;
    
    //Lista incial
    cout << "Lista inicial Nao-Ordenada: "<<endl;
    for ( int i = 0; i < 7; i++ )
        cout << test[i] << " ";
    
    //Chamada a função gnomeSort
    gnomeSort(7, test);
    cout <<endl <<endl;
    
    //Depois da exucução; lista ordenada
    cout << "Lista Ordenada: "<<endl;
    for ( int i = 0; i < 7; i++ )
        cout << test[i] << " ";

    system("PAUSE");
    return EXIT_SUCCESS;
}

