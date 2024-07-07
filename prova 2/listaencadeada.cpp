/*
Bernardo de Alencar Monteiro - 241008460 - lista encadeada - prova 2 CPE
*/

#include <iostream>
#include <string>

using namespace std;

struct lista {
    string valor;
    lista* proximo;
};

void inserir(lista*& cabeca, const string& valor) {
    lista* novalista = new lista;
    novalista->valor = valor;    
    novalista->proximo = cabeca;
    cabeca = novalista;
}

lista* buscar(lista* cabeca, const string& valor) {
    lista* atual = cabeca;
    while (atual != nullptr && atual->valor != valor) {
        atual = atual->proximo;
    }
    return atual;
}

void liberalista(lista*& cabeca) {
    lista* atual = cabeca;
    while (atual != nullptr) {
        lista* proximo = atual->proximo;
        delete atual;
        atual = proximo;
    }
    cabeca = nullptr;
}

int main() {
    int N;
    while (true) {
        cout << endl << "digite o numero de palavras que devem ser guardadas (0 para sair): ";
        cin >> N;
        if (N == 0) {
            break;
        }

        lista* cabeca = nullptr;
        string palavra;

        for (int i = 0; i < N; ++i) { // lendo palavras e inserindo elas na lista
            cout << "digite uma palavra: ";
            cin >> palavra;
            inserir(cabeca, palavra);
        }

        cout << endl << "digite a palavra que deve ser buscada na lista: ";
        cin >> palavra;

        lista* resultado = buscar (cabeca, palavra); // buscando a palavra na lista
        if (resultado != nullptr) {
            cout << endl << "valor " << palavra << " encontrado!" << endl;
        } else {
            cout << endl << "valor " << palavra << " nao encontrado!" << endl;
        }

        liberalista(cabeca); // liberando a memoria da lista
    }

    return 0;
}