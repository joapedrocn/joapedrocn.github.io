#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Digite o tamanho do vetor:\n";
    cin >> N;

    int vetor1[N], vetor2[N];

    for (int i = 0; i < N; i++) {
        cout << "Digite o(s) valor (es) do vetor 1 :\n";
        cin >> vetor1[i];
    }
    for (int i = 0; i < N; i++) {
        cout << "Digite o(s) valor (es) do vetor 2 :\n";
        cin >> vetor2[i];
    }

    int vetor3[N * 2];

    for (int i = 0; i < N; i++) {
        vetor3[i] = vetor1[i];
        vetor3[N + i] = vetor2[i];
    }

    for (int i = 0; i < N * 2; i++) {
        cout << "RESULTADO: " << vetor3[i] << endl;
    }

    return 0;
}
