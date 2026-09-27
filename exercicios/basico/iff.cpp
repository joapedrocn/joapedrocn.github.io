#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main ()
{
    float nota1,nota2;
    float media;

    cout << "Insira a nota 1:\n";
    cin >> nota1;
    cout << "Insira a nota 2:\n";
    cin >> nota2;

    media=(nota1+nota2)/2;

    cout << "A media foi:" << media << "\n\n";

    if (media>=5)
    {
        cout << "Aluno Aprovado!\n\n";
    }
    else if (media>=4)
    {
        cout << "Aluno de Recuperacao\n\n";
    }
    else {
        cout << "Aluno Reprovado;-;\n\n";
    }

    system ("pause");
    return 0;
}
