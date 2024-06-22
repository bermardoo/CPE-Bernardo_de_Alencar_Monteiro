// Bernardo de Alencar Monteiro | matricula 241008460 | lista 8 (ponteiros) questao 3

#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    double N[100];
    double num;

    cin >> num;
    
    N[0] = num;

    for (int i = 1; i < 100; ++i) {
        N[i] = N[i - 1] / 2.0;
    }

    for (int i = 0; i < 100; ++i) {
        cout << "N[" << i << "] = " << fixed << setprecision(4) << N[i] << endl;
    }

    return 0;
}