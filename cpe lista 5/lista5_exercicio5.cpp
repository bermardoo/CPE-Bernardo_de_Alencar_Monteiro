#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));

    char jogar;

    do{
        int num = rand() % 1000 + 1;
        int chute;
        int tentativas = 0;

        cout << "\nadivinhe o numero que estou pensando entre 1 e 1000!" << endl;

        do {
            cout << "digite o seu chute: ";
            cin >> chute;
            tentativas++;

            if (chute == num) {
                cout << "\nparabens! voce acertou :)" << endl;
            } else if (chute < num) {
                cout << "\nmuito baixo, tente novamente" << endl;
            } else {
                cout << "\nmuito alto, tente novamente" << endl;
            }
        } while (chute != num);

        cout << "\nnumero de tentativas: " << tentativas << endl;

        cout << "\nquer jogar novamente? (s/n): ";
        cin >> jogar;
    } while (jogar == 's');

    cout << "\nobrigado por jogar! ate a proxima :)" << endl;
    
    return 0;
}