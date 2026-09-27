#include <iostream>

using namespace std;

int main ()
{
    int vidas=0;
    char letra='B';
    float decimal=5.2;
    double decimal2=5.2;
    bool vivo=true;
    string nome="Joao";

    cout << "Digite o numero de vidas:\n";
    cin >> vidas;
    cout << "Digite uma letra:\n";
    cin >> letra;
    cout << "Digite um numero decimal:\n";
    cin >> decimal;
    cout << "Digite um nome: \n";
    cin >> nome;



    cout << "\n"<< vidas << "\n" << letra << "\n" << decimal << "\n" << vivo << "\n" <<nome << "\n>";

    system ("pause");
    return 0;
}
