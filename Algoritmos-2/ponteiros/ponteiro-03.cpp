#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int *vetor = NULL;
    int *p = NULL;
    int N;
    int i;
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
        if (vetor[i] > maiorValor)
        {
            maiorValor = vetor[i];
        }
    }

    cout << maiorValor << endl;

    delete[] vetor;

    return 0;
}