#include <iostream>
using namespace std;

int main () {
    // 1. inicialização
    float ex;
    int x, fatorial, potencia;

    ex = 1;
    cout << "digite o valor de x: ";
    cin >> x;
    fatorial = 1;
    potencia = 1;

    // 2. processamento
    for (int i = 1; i <= 10; i++){

        // 2.1 calcular fatorial
        fatorial *= i; // mesma coisa que "fatorial = fatorial * i"

        // 2.2 calcular potencia
        potencia *= x;

        // 2.3 calcular ex
        // cout << fatorial << " - " << potencia << endl;
        ex += ((float) potencia / (float) fatorial);
    }

    // 3. finalização
    cout << endl << "o valor de ex e igual a: " << ex << endl;

    return 0;
}