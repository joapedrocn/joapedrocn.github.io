#include <iostream>
using namespace std;

// Isto é a STRUCT (o molde do objeto)
struct Personagem {
    string nome;
    int vida;

    // Isto é uma FUNÇÃO dentro da struct (uma ação que ela sabe fazer)
    void tomarDano(int dano) {
        vida -= dano;
        cout << nome << " tomou " << dano << " de dano e agora tem " << vida << " de vida." << endl;
    }
};

int main() {
    // Criando o personagem usando a struct
    Personagem jogador1 = {"Guerreiro", 100};

    // Chamando a função que criamos dentro da struct
    jogador1.tomarDano(30);

    return 0;
}
