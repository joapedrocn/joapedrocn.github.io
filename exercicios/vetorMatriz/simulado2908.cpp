#include <iostream>
using namespace std;

int main() {
    int mat[10][10];
    int linhas, colunas;
    int i, j;

    cout << "Quantidade de linhas: ";
    cin >> linhas;
    cout << "Quantidade de colunas: ";
    cin >> colunas;

    cout << "Digite os elementos da matriz:\n";
    for (i = 0; i < linhas; i++)
        for (j = 0; j < colunas; j++)
            cin >> mat[i][j];

    // numero 1

    int maior = mat[0][0];
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            if (mat[i][j] > maior) {
                maior = mat[i][j];
            }
        }
    }
    cout << "Maior elemento da matriz: " << maior << endl;

   // numero 2

    int somaTotal = 0;
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            somaTotal += mat[i][j];
        }
    }
    cout << "Soma de todos os elementos da matriz: " << somaTotal << endl;

   // numero 3

    int contPares = 0;
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            if (mat[i][j] % 2 == 0) {
                contPares++;
            }
        }
    }
    cout << "Quantidade de elementos pares na matriz: " << contPares << endl;

   //numero 4

    cout << "Soma dos elementos de cada linha:" << endl;
    for (i = 0; i < linhas; i++) {
        int somaLinha = 0;
        for (j = 0; j < colunas; j++) {
            somaLinha += mat[i][j];
        }
        cout << "Linha " << i << ": " << somaLinha << endl;
    }

    //numero 5

    cout << "Soma dos elementos de cada coluna:" << endl;
    for (j = 0; j < colunas; j++) {
        int somaColuna = 0;
        for (i = 0; i < linhas; i++) {
            somaColuna += mat[i][j];
        }
        cout << "Coluna " << j << ": " << somaColuna << endl;
    }

    return 0;
}
