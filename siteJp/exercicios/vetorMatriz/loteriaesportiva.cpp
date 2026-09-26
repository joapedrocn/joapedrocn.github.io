#include <iostream>
using namespace std;

int main()
{
    const int tam = 13;
    int vetorG[tam];
    int vetorR[tam];
    int acertos = 0;

    vetorG[0] = 1;
    vetorG[1] = 2;
    vetorG[2] = 3;
    vetorG[3] = 1;
    vetorG[4] = 2;
    vetorG[5] = 3;
    vetorG[6] = 1;
    vetorG[7] = 2;
    vetorG[8] = 3;
    vetorG[9] = 1;
    vetorG[10] = 2;
    vetorG[11] = 3;
    vetorG[12] = 1;

    for(int i = 0; i < 13; i++)
    {
        cout << "Digite o valor do jogo " << i+1 << " (1,2 ou 3): ";
        cin >> vetorR[i];

        if(vetorG[i] == vetorR[i])
            acertos++;
    }

    cout << "Total de acertos: " << acertos << endl;

    if(acertos == 13)
    {
        cout << "GANHADOR,PARABENS!";
    }

    return 0;
}
