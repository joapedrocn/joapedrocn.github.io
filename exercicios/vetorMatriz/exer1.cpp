#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Insira o tamanho do primeiro vetor: ";
    cin >> n;

    int vector1[n];

    cout << "\nDigite os elementos do vetor:\n";
    for (int i = 0; i < n; i++) {
        cout << "Elemento " << i << ": ";
        cin >> vector1[i];
    }

    int vector2[n];

    for (int i = 0; i < n; i++) {
        vector2[i] = vector1[i];
    }

    cout << "\nVetor original: ";
    for (int i = 0; i < n; i++) {
        cout << vector1[i] << " ";
    }
    cout << endl;

    cout << "Vetor cópia: ";
    for (int i = 0; i < n; i++) {
        cout << vector2[i] << " ";
    }
    cout << endl;

    return 0;
}
