// Bernardo de Alencar Monteiro | matricula 241008460 | lista 6 questao 2

#include <iostream>

using namespace std;

int main() {
    int N[10];

    cout << "insira um valor inteiro menor ou igual a 50!" << endl;

    cin >> N[0];

    for (int i = 1; i < 10; i++) {
        N[i] = N[i-1] * 2;
    }

    for (int i = 0; i < 10 ; i++) {
        cout << "o seu numero N[" << i << "] e: " << N[i] << endl;
    }
    
    return 0;
}