#include <iostream>

using namespace std;

int main ()
{
    int n, elementos;

    cout << "Insira o tamanho do primeiro vetor:";
    cin>> n;

    int vector1[n];

    cout << "\nDigite os elementos a serem transferidos:\n\n";
    cin >> elementos;

    for (int i = 0; i < n; i++)
    {
        cout << "Elemento:" << i;
        cin >> vector1[i];
    }

    int vector2[n];

    for (int i = 0; i < n;i++)
    {
        vector1[i]=vector2[i];
    }

    cout << "Vetor1/original\:";
    for (int i = 0; i < n; i++) {
        cout << vector1[i] << " ";
    }

    cout <<"Vetor2/copia:";
    for(int i = 0; i < n; i++){
        cout << vector2[i] << " ";
    }
    return 0;
}
