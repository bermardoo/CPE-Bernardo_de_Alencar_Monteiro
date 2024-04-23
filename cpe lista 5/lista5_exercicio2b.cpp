#include<iostream>
using namespace std;

bool primo(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++) { 
        if (num % i == 0) // se num for divisivel por i, nao e primo
            return false;
    }
    return true; // se nao for divisivel, num e primo
}

int main() {
    cout << "vou te dizer todos os numeros primos entre 2 e 1000: " << endl;

    for(int num = 2; num <=1000; num++){
        if (primo(num))
            cout << num << " e um numero primo." << endl; //fazemos uma checagem e confirmacao somente dos valores que retornam o bool como true, ja que queremos apenas os primos
    }
    
    return 0;
}