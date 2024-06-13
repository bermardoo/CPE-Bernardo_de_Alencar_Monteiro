// Bernardo de Alencar Monteiro | matricula 241008460 | lista 7 (strings) questao 4

#include <iostream>
#include <string>

using namespace std;

int main () {
    int c;
    cin >> c;
    cin.ignore();

    for (int i = 0; i < c; i++) {
        string mensagemCod, textoEscond;
        getline (cin, mensagemCod);

        for (char ch : mensagemCod) {
            if (islower(ch)){
                textoEscond += ch;
            }
        }

        for (int j = textoEscond.length() - 1; j >= 0; j--) {
            cout << textoEscond[j];
        }

        cout << endl;
    }

    return 0;
}