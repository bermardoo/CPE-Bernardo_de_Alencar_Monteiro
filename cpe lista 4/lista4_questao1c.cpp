#include<iostream>
using namespace std;

int fatorial (int n){
    return (n == 1 || n == 0) ? 1 : n * fatorial(n-1);
}

int main(){
    int num;
    float e = 0.0;

    cout << "por favor digite um numero positivo: " << endl;
    cin >> num;

    // checando se o numero e negativo
    if (num < 0){
        cout << "seu numero deve ser positivo!" << endl;
        return main();
    }

    for (int i = 0; i < num; i++){
        e += num^i/fatorial(i);
    }
    cout << "seu numero de euler " << e << " elevado a x com " << num << " termos.";
    return 0;
}