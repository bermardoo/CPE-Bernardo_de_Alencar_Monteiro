// Bernardo de Alencar Monteiro | matricula 241008460 | lista 6 questao 3

#include <iostream>

using namespace std;

int main() {
    int N[20];
    cout << "insira 20 valores inteiros no vetor e irei inverte-lo" << endl;

    for (int i = 0; i < 20; i++) {
        cin >> N[i];
    }

    for (int i = 0; i < 10; i++) {
        int temp = N[i];
        N[i] = N[19 - i];
        N[19 - i] = temp;
    }

    for (int i = 0; i < 20; i++) {
        cout << "o numero em N[" << i << "] e = " << N[i] << endl;
    }

    return 0;
}