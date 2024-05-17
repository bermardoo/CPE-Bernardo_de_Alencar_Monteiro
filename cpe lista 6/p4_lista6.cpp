// Bernardo de Alencar Monteiro | matricula 241008460 | lista 6 questao 3

#include <iostream>

using namespace std;

int main() {
    int N[15], Par[5], Impar[5], par = 0, impar = 0;

    cout << "digite 15 numeros inteiros :)" << endl;

    for (int i = 0; i < 15; i++) {
        cout << endl << "por favor digite o N[" << i << "] : ";
        cin >> N[i]; // recebendo os valores do vetor N[]
    }

    for (int i = 0; i < 15; i++) { // checando se é par ou ímpar
        if (N[i] % 2 == 0) { // se é par
            Par[par++] = N[i];
            if (par == 5) { // imprime os pares até então e zera o contador
                for (int k = 0; k < 5; k++) {
                    cout << "Par[" << k << "] = " << Par[k] << endl;
                }
                par = 0;
            }
        } else if (N[i] % 2 != 0) { // se é ímpar
            Impar[impar++] = N[i];
            if (impar == 5) { // imprime os ímpares até então e zera o contador
                for (int k = 0; k < 5; k++) {
                    cout << "Impar[" << k << "] = " << Impar[k] << endl;
                }
                impar = 0;
            }
        }
    }

    for (int i = 0; i < impar; i++) {
        cout << "Impar[" << i << "] = " << Impar[i] << endl;
    }
    for (int i = 0; i < par; i++) {
        cout << "Par[" << i << "] = " << Par[i] << endl;
    }

    return 0;
}