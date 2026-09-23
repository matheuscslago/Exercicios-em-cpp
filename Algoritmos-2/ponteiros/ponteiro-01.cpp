#include <iostream>
using namespace std;
int main()
{
    int *vetor = NULL; // criando ponteiro vetor e inicializando como null
    int *p = NULL;     // ponteiro auxiliar
    int N;             // Tamanho do vetor
    int i;             // Controle de laço de repetição

    // Lendo N
    cin >> N;

    // criando o vetor
    vetor = new int[N];

    // inicializando o ponteiro auxiliar e lendo valores para o vetor
    p = vetor;
    for (i = 0; i < N; i++)
    {
        cin >> *p;
        p++;
    }

    // reinicializando o ponteiro e mostrando o vetor
    p = vetor;
    for (i = 0; i < N; i++)
    {
        cout << *p << " ";
        p++;
    }

    // deletando os ponteiros
    delete[] vetor;

    return 0;
}