#include <iostream>

using namespace std;

int main() {
    int N;

    cout << "Digite o tamanho dos vetores: ";
    cin >> N;

    int vetor1[N], vetor2[N];

    cout << "\nDigite os elementos do vetor 1:\n";
    for (int i = 0; i < N; i++) {
        cout << "Elemento " << i << ": ";
        cin >> vetor1[i];
    }

    cout << "\nDigite os elementos do vetor 2:\n";
    for (int i = 0; i < N; i++) {
        cout << "Elemento " << i << ": ";
        cin >> vetor2[i];
    }

    int vetor3[N * 2];

    for (int i = 0; i < N; i++) {
        vetor3[i * 2] = vetor1[i];
        vetor3[i * 2 + 1] = vetor2[i];
    }

    cout << "\nVetor 1: ";
    for (int i = 0; i < N; i++) {
        cout << vetor1[i] << " ";
    }
    cout << endl;

    cout << "Vetor 2: ";
    for (int i = 0; i < N; i++) {
        cout << vetor2[i] << " ";
    }
    cout << endl;

    cout << "Vetor 3 (INTERCALACAO): ";
    for (int i = 0; i < N * 2; i++) {
        cout << vetor3[i] << " ";
    }
    cout << endl;

    return 0;
}
