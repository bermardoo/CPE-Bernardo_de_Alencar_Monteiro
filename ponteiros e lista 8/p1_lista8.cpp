// Bernardo de Alencar Monteiro | matricula 241008460 | lista 8 (ponteiros) questao 1

#include <iostream>

using namespace std;

int main () {
    int n;

    cin >> n;

    int casos[n];

    for (int i = 0; i < n; i++) {
        cin >> casos[i];
    }

    for (int i = 0; i < n; i++) {
        int x = casos[i];
        unsigned long long graos_totais = 0;
        unsigned long long graos_quadrado = 1;

        for (int j = 0; j < x; j++) {
            graos_totais += graos_quadrado;
            graos_quadrado *= 2; 
        }

        unsigned long long g = graos_totais / 12;
        unsigned long long kg = g / 1000;

        cout << kg << " kg" << endl;
    }

    return 0;
}