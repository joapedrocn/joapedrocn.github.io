#include <iostream>

using namespace std;

int main ()
{
    int  linhas, colunas;

    cout << "Digite o numero de linhas da matriz:\n";
    cin >> linhas;
    cout << "Digite o numero de colunas da matriz:\n";
    cin >> colunas;

    int matriz1[linhas][colunas];
    int matriz2[linhas][colunas];

    // Lendo a primeira matriz (linha por linha)
    for (int i = 0; i < linhas; i++)
        for (int j = 0; j < colunas; j++)
        {
            cout << "Escreva o valor da primeira matriz na posicao [" << i << "][" << j << "]:\n";
            cin >> matriz1[i][j];  // APENAS UM cin
        }

    // Lendo a segunda matriz (linha por linha)
    for (int i = 0; i < linhas; i++)
        for (int j = 0; j < colunas; j++)
        {
            cout << "Escreva o valor da segunda matriz na posicao [" << i << "][" << j << "]:\n";
            cin >> matriz2[i][j];  // APENAS UM cin
        }

    int matriz3[linhas][colunas];

    // Somando e exibindo
    for (int i = 0; i < linhas; i++)
        for (int j = 0; j < colunas; j++)
        {
            matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
            cout << "A soma das duas matrizes resultou em: " << matriz3[i][j] << "\n";
        }

    return 0;
}
