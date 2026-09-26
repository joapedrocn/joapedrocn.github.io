#include <iostream>

using namespace std;

int main ()
{
    int N, M;

    cout << "Digite o tamanho do vetor:";
    cin >> N;

    const int conteudo = N;

    int vec1[conteudo];

    for (int i = 0;i < N; i++ )
    {
        cout << "Digite o valor do indice:";
        cin >> M;

        vec1[0]=M;
    }

    int vec2[vec1];

    system ("pause");
    return 0;
}
