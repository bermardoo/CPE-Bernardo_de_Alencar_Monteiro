// Bernardo de Alencar Monteiro (241008460) - Prova 1 - Questão 1

#include <iostream>
using namespace std;

int main(){
    int idade;

    cout << "descubra se voce pode ou deve votar! insira a sua idade que direi a sua situacao eleitoral: ";
    cin >> idade;

    if (idade > 65 || idade == 16 || idade == 17){
        cout << endl << "ELEITOR: VOTO FACULTATIVO" << endl;
    } else if (idade >= 18 && idade <= 65) {
        cout << endl << "ELEITOR: VOTO OBRIGATORIO" << endl;
    } else if (idade < 16) {
        cout << endl << "NAO ELEITOR" << endl;
    }
    return 0;
}