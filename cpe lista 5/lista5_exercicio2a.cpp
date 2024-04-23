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
    int num;
    cout << "digite um numero inteiro maior que 1: " << endl;
    cin >> num;

    if (primo(num))
        cout << num << " e um numero primo." << endl;
    else
        cout << num << " nao e um numero primo." << endl;

    return 0;
}