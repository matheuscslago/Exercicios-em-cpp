#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int *vetor = NULL;
    int *p = NULL;
    int N;
    int i;
    int cont = 0;
    int maiorValor;

    cin >> N;

    vetor = new int[N];

    for (i = 0; i < N; i++)
    {
        cin >> vetor[i];
    }

    maiorValor = vetor[0];
    p = vetor;

    for (i = 1; i < N; i++)
    {
        if (vetor[i] % 2 == 0 && vetor[i] > 0)
        {
            cont++;
        }
    }

    cout << cont << endl;

    delete[] vetor;

    return 0;
}