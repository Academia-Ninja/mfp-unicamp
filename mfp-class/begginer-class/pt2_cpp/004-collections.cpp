#include <iostream>
#include <list>
#include <map>
#include <set>
#include <vector>

using namespace std;

int somar(int x, int y) {
    return x + y;
}

void imprimir(int valor) {
    cout << "Valor: " << valor << endl;
}

int main() {
    // Coleções
    // Vetores: #include <vector>
    vector<int> valores;
    int valores_forma_b[5];
    int auxiliar;

    for (int i = 0; i < 5; i++) {
        cin >> auxiliar;
        valores.push_back(auxiliar); // inserir valores
    }

    for (int i = 0; i < valores.size(); i++) // percorrer o vetor
        cout << valores[i] << " ";
    cout << endl;

    cout << "Tamanho: " << valores.size() << endl;

    // Listas: #include <list>
    list<int> lista = {1, 2, 3, 4, 5};

    for (auto i = lista.begin(); i != lista.end(); ++i) // posicao do inicio e do final
        cout << *i << " ";                              // ponteiro para posicao
    cout << endl;

    // Dicionários - coleções de itens que relaciona uma chave a um ou mais elementos: #include <map>
    map<int, string> alunos = {{1, "Estela"}, {2, "João"}};

    for (auto &item : alunos)
        cout << "Chave: " << item.first << " Valor: " << item.second << endl;

    // Conjuntos (Sets) - coleção que não repete valores e os itens não podem ser modificados: #include <set>
    set<int> sets{1, 1, 2, 3, 4, 5};

    for (auto i : sets)
        cout << i << " ";
    cout << endl;

    // Funções - blocos de código para execução de funcionalidades específicas que se repetem diversas vezes. Necessário indicar o tipo de retorno e de cada parâmetro. Acesso às funções no início do documento (característica do C++)
    // void vazio(){}

    int num_1 = 10, num_2 = 8;
    int som = somar(num_1, num_2);
    imprimir(som);

    return 0;
}