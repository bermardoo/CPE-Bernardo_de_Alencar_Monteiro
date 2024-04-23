#include <iostream>
using namespace std;

void torresHanoi (int disco, int estacaIni, int estacaDes, int estacaTemp) {
    if (disco == 1) {
        cout << estacaIni << " --> " << estacaDes << endl;
        return;
    }

    torresHanoi (disco - 1, estacaIni, estacaTemp, estacaDes);
    cout << estacaIni << " --> " << estacaDes << endl;
    torresHanoi (disco - 1, estacaTemp, estacaDes, estacaIni);
}

int main () {
    int numDisco;
    cout << "digite o numero de discos: ";
    cin >> numDisco;

    cout << endl << "instrucoes para resolver as torres de hanoi: " << endl;
    torresHanoi (numDisco, 1, 3, 2);

    return 0;
}