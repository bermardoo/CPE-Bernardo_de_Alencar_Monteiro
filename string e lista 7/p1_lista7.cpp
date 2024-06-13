// Bernardo de Alencar Monteiro | matricula 241008460 | lista 7 (strings) questao 1

#include <iostream>
#include <string>

using namespace std;

int main () {
    string linha;

    while (getline(cin, linha)) {
        bool italico = false;
        bool negrito = false;

        string resultado;

        for (char car : linha) {
            if (car == '_') {
                if (italico) {
                resultado += "</i>";
                } else {
                    resultado += "<i>";
                }
                italico = !italico;
            } else if (car == '*') {
                if (negrito) {
                    resultado += "</b>";
                } else {
                    resultado += "<b>";
                }
                negrito = !negrito;
            } else {
                resultado += car;
            }
        }
        cout << resultado << endl;
    }

    return 0;
}