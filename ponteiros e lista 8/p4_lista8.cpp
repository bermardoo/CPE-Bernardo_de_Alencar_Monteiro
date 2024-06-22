// Bernardo de Alencar Monteiro | matricula 241008460 | lista 8 (ponteiros) questao 4

#include <iostream>

using namespace std;

int main () {
    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int numa1, numa2, numb1, numb2;
        cin >> numa1 >> numa2 >> numb1 >> numb2;

        if ((numa1 < numb1 && numa2 < numb2) || (numa1 < numb2 && numa2 < numb1)) {
            cout << "S" << endl;
        } else {
            cout << "N" << endl;
        }
    }

    return 0;
}