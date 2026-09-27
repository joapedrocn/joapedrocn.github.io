#include <iostream>
using namespace std;

// ============================================================
// FUNÇÕES FORNECIDAS PELO PROFESSOR (JÁ PRONTAS)
// ============================================================

// Função que conta quantos dígitos tem um número inteiro
int quantidadeDeDigitosDeUmInteiro(int n) {
    int r = 0;  // Contador de dígitos

    // Caso especial: se o número for 0, tem 1 dígito
    if (n == 0) {
        return 1;
    }

    // Enquanto o número não for zero, vamos dividindo por 10
    // Cada divisão "corta" um dígito da direita
    while (n != 0) {
        n = n / 10;   // Ex: 123 -> 12 -> 1 -> 0
        r = r + 1;    // Conta mais um dígito
    }

    return r;  // Retorna a quantidade de dígitos
}

// Função que retorna um dígito específico de um número
// pos = 1 é a unidade (último dígito), pos = 2 é a dezena, etc.
int digitoDeUmInteiro(int n, int pos) {
    int digito;      // Vai guardar o dígito encontrado
    int i = 1;       // Contador para percorrer as posições

    // Descobre quantos dígitos tem o número
    int tam = quantidadeDeDigitosDeUmInteiro(n);

    // Se a posição pedida for maior que o tamanho do número, retorna erro (-1)
    if (pos > tam) {
        return -1;
    }

    // Enquanto não chegamos na posição desejada, vamos "cortando" dígitos
    while (i <= pos) {
        digito = n % 10;   // Pega o último dígito (unidade)
        n = n / 10;        // Remove o último dígito (divide por 10)
        i = i + 1;         // Avança para a próxima posição
    }

    // Quando o loop termina, digito tem o valor da posição pedida
    return digito;
}

// ============================================================
// QUESTÃO 1 (5,0 PONTOS): FUNÇÃO QUE DETECTA NÚMERO ESPELHADO
// ============================================================

// Função que verifica se um número é espelhado (palíndromo)
// Exemplos: 101, 3, 44, 1980891
bool numeroEspelhado(int num) {
    int i = 1;                    // Começa pela posição 1 (unidade)
    int digito1, digito2;         // Vão guardar os dígitos comparados
    int tam;                      // Tamanho do número (quantos dígitos)

    // Descobre quantos dígitos tem o número
    tam = quantidadeDeDigitosDeUmInteiro(num);

    // Só preciso comparar até a METADE do número
    // Se o número tem 5 dígitos, comparo posição 1 com 5, e 2 com 4
    // O dígito do meio (posição 3) não precisa ser comparado com ele mesmo
    while (i <= tam / 2) {

        // Pega o dígito da posição i (começando pela unidade)
        // Ex: num=12321, i=1 -> pega o dígito 1 (unidade)
        digito1 = digitoDeUmInteiro(num, i);

        // Pega o dígito da posição espelhada (tam+1-i)
        // Ex: num=12321, tam=5, i=1 -> posição 5 (último dígito)
        digito2 = digitoDeUmInteiro(num, tam + 1 - i);

        // Se os dois dígitos forem DIFERENTES, não é espelhado
        if (digito1 != digito2) {
            return false;   // Já pode sair da função com resposta negativa
        }

        // Avança para a próxima posição (i = 1, 2, 3...)
        i = i + 1;
    }

    // Se o loop terminou sem encontrar diferenças, é espelhado
    return true;
}

// ============================================================
// QUESTÃO 2 (5,0 PONTOS): FUNÇÃO MAIN PARA TESTAR
// ============================================================

int main() {
    int inicio, fim;   // Limites do intervalo
    int i;             // Contador do loop

    // Mensagem de boas-vindas (igual ao exemplo da prova)
    cout << "Este programa imprime uma lista de numeros espelhados compreendidos dentro de um intervalo estabelecido pelo usuario...\n\n";

    // Pede o limite INICIAL do intervalo
    cout << "Indique o limite INICIAL dos numeros que serao testados: ";
    cin >> inicio;

    // Pede o limite FINAL do intervalo
    cout << "Indique o limite FINAL dos numeros que serao testados: ";
    cin >> fim;

    // Título da lista que vai ser impressa
    cout << "\nIMPRESSAO DOS NUMEROS ESPELHADOS:\n";

    // =============================================================
    // CASO 1: Intervalo CRESCENTE (inicio < fim)
    // Exemplo: inicio = 100, fim = 200
    // =============================================================
    if (inicio < fim) {

        i = inicio;  // Começa pelo limite inicial

        // Enquanto i for menor ou igual ao limite final, continua
        while (i <= fim) {

            // Se o número atual (i) for espelhado, imprime ele
            if (numeroEspelhado(i)) {
                cout << i << " ";   // Imprime na mesma linha com espaço
            }

            i = i + 1;  // Avança para o próximo número (crescente)
        }

    // =============================================================
    // CASO 2: Intervalo DECRESCENTE (inicio > fim)
    // Exemplo: inicio = 300, fim = 200 (como na prova)
    // =============================================================
    } else {

        i = inicio;  // Começa pelo limite inicial (que é maior)

        // Enquanto i for maior ou igual ao limite final, continua
        while (i >= fim) {

            // Se o número atual (i) for espelhado, imprime ele
            if (numeroEspelhado(i)) {
                cout << i << " ";   // Imprime na mesma linha com espaço
            }

            i = i - 1;  // Avança para o próximo número (decrescente)
        }
    }

    cout << "\n";  // Quebra de linha no final

    return 0;  // Programa terminou com sucesso
}
