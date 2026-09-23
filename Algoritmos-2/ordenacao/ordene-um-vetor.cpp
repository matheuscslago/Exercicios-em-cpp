#include <iostream>
#include <iomanip>
#include "ordenacao.h"
using namespace std;

int main(){
    double vetorNumReais[100]; //vetor de numeros reais
    int tamanho = 0; //contador para saber quantos numeros foram inseridos
    int i; //variavel de controle do laço de leitura
    int j; //variavel de controle do laço de impressão dos valores
    
    for(i = 0; i < 100; i++){ //laço para leitura dos numeros do vetor
        cin >> vetorNumReais[i]; 
        if(vetorNumReais[i] == -1){ //condição de parada da leitura (se for digitado -1)
            break;
        }
        tamanho++; //incremento da quantidade de elementos
    }
    
    if(tamanho > 0){ //condição para evitar erro no último parâmetro
        quickSort(vetorNumReais, 0, tamanho - 1);
    }
    
    cout << fixed << setprecision(1); //ajustar casas decimais para apenas uma casa
    
    for(j = 0; j < tamanho; j++){ //laço para imprimir o vetor ordenado
        cout << vetorNumReais[j] << " ";
    }
    
    
    return 0;
}