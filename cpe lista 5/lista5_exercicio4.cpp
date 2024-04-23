#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

void pergunta () {
    int num1 = rand() % 9 + 1;
    int num2 = rand() % 9 + 1;
    int resp;

    cout << "quanto e " << num1 << " vezes " << num2 << "?" << endl;
    cin >> resp;

    while ( resp != num1 * num2){
        cout << "errado! tente novamente :)" << endl;
        cin >> resp;
    }

    cout << "muito bem! :D" << endl;

}

int main () {
    srand(time(0));

    cout << "vamos multiplicar? digite 's' para continuar e 'n' para finalizar o programa" << endl;
    cout << "apos digitar sua resposta de 'enter' de novo :)" << endl;
   
    char continuar;

    do {
        pergunta();

        cin.ignore();
        continuar = cin.get();

        cout << "deseja continuar? (s/n): ";
        cin >> continuar;
    } while (continuar == 's');

    cout << "ate a proxima :)" << endl;

    return 0;
}