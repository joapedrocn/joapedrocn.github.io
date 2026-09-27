#include <iostream>


using namespace std;

int main ()
{
    int N;

    cout << "Digite o tamanho do vetor:";
    cin >> N;

    int vetor1[N], vetor2[N];

    for (int i = 0; i < N; i++)
    {
        cout << "Insira o valor(es) do vetor 1:\n";
        cin >> vetor1[i];
    }
     for (int i = 0; i < N; i++)
    {
        cout << "Insira o valor(es) do vetor 2:\n";
        cin >> vetor2[i];
    }

    int vetor3[N];

    for (int i = 0;i<N;i++)
    {
        vetor3[i]=vetor1[i]+vetor2[i];
        cout << "O valor da soma e:" << vetor3[i];
    }
    return 0;
}
