#include <iostream>

using namespace std;

int main() {
    // Estruturas Lógicas
    int a = 1;
    int b = 2;

    // Operadores Aritméticos - expressões matemáticas
    int soma = a + b;
    int subtracao = a - b;
    int multiplicacao = a * b;
    int divisao = a / b;
    int mod = a % b;

    // Operadores de Atribuição - atribuir valores, podendo ser unidos aos operadores aritméticos
    soma += b;
    subtracao -= b;
    multiplicacao *= b;
    divisao /= b;
    mod %= b;

    // Operadores de Comparação - comparação de dois valores
    cout << (a > b) << endl;  // maior
    cout << (a < b) << endl;  // menor
    cout << (a != b) << endl; // diferente
    cout << (a >= b) << endl; // maior ou igual
    cout << (a <= b) << endl; // menor ou igual

    // Operadores Lógicos - testes lógicos
    cout << (a && b) << endl;  // E
    cout << (a || b) << endl;  // OU
    cout << !(a && b) << endl; // Não

    // Estruturas Condicionais
    int idade = 16;

    // if - verificação de uma condição
    // if-else -  verificação de duas condições
    // if-else if-else -  verificação de três ou mais condições

    if (idade >= 18 && idade <= 65) {
        cout << "Voto obrigatório" << endl;
    } else if (idade >= 16 || idade > 65) {
        cout << "Voto optativo" << endl;
    } else {
        cout << "Voto não obrigatório" << endl;
    }

    // ternário - if escrito em apenas uma linha
    bool resultado = (idade >= 18) ? true : false;

    string voto = resultado ? "Voto obrigatório" : "Voto não obrigatório";
    cout << voto << endl;

    // Estruturas de Repetição
    int x = 10;

    // Loops For - repetição em um determinado número de vezes
    for (int i = 0; i < 10; i++) {
        x += i;
    }

    cout << "X: " << x << endl;

    // Loops while - repetição até que a condição seja satisfeita
    while (x < 20) {
        x += 1;
        if (x == 15)
            break;
    }

    cout << "X: " << x << endl;

    return 0;
}