#include <iostream>
using namespace std;

int main() {
    // Tipos de Variáveis

    // inteiros
    int valorX = 10;
    unsigned int valor = 1;          // apenas de valores positivos
    short int valorA = 1;            // valores muito curtos
    long long int valorB = 10000000; // valores muito maiores que 32 bits

    // reais
    float valorY = 9.8;   // 32 bits
    double valorZ = 10.2; // 64 bits

    // booleanos
    bool valor_bool = true;
    valor_bool = false;

    // textuais
    string palavra;
    string nome = "Estela";

    getline(cin, palavra);     // entrada que permite entrada com espaços
    int tamanho = nome.size(); // tamanho da palavra
    palavra = palavra + nome;  // concatenacao

    return 0;
}