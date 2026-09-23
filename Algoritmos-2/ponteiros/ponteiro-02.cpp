#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int *vetor = NULL;
    int *p = NULL;
    int N;
    int i;
    double soma = 0;

    cin >> N;

    vetor = new int[N];

    for (i = 0; i < N; i++)
    {
        cin >> vetor[i];
    }

    p = vetor;
    for (i = 0; i < N; i++)
    {
        soma += *p;
        p++;
    }

    cout << fixed << setprecision(2);
    cout << "Media: " << soma / N << endl;

    delete[] vetor;

    return 0;
}