#include<iostream>
#include<cmath>
using namespace std;

bool primoa(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++) { 
        if (num % i == 0) // se num for divisivel por i, nao e primo
            return false;
    }
    return true; // se nao for divisivel, num e primo
}

bool primob(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i  <= sqrt(num); i++) { 
        if (num % i == 0) // se num for divisivel por i, nao e primo
            return false;
    }
    return true; // se nao for divisivel, num e primo
}

int main() {
    int num;
    cout << "digite um numero inteiro maior que 1: " << endl;
    cin >> num;

    if (primoa(num)){
        cout << num << " e um numero primo, usando n/2." << endl;
    } else {
        cout << num << " nao e um numero primo, usando n/2." << endl;
    }

    if(primob(num)) {
        cout << num << " e um numero primo, usando a raiz de n." << endl;
    } else {
        cout << num << " nao e um numero primo, usando a raiz de n." << endl;
    }
        
    return 0;
}