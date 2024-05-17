// Bernardo de Alencar Monteiro | matricula 241008460 | lista 6 questao 1

#include <iostream>

using namespace std;

int main() {
    int x[10];

    cout << "insira 10 numeros e irei substituir todos os valores nulos e negativos por 1!" << endl;

    // recebendo os valores para o vetor

    for ( int i = 0; i < 10; i++) {
        cout << "informe o numero " << i+1 << " = ";
        cin >> x[i];
    }

    // checando os valores e substituindo os nulos e negativos por 1

    for (int i = 1; i < 10; i++) {
        if (x[i] <= 0) {
            x[i] = 1;
        }
    }

    // imprimindo o vetor

    for (int i = 0; i < 10; i++) {
        cout << "o seu numero " << i+1 << " depois das alteracoes e: " << x[i] << endl;
    }

    return 0;
}