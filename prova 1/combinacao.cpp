// Bernardo de Alencar Monteiro (241008460) - Prova 1 - Questão 3

#include <iostream>
using namespace std;

int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
        
    } else {
        return n * fatorial(n-1);
    }
}

int permutacao(int n){
    return fatorial(n);
}

float arranjo(float n, float p){
    return (fatorial(n))/(fatorial(n-p));
}

float combinacao(float n, float p){
    return (fatorial(n))/(fatorial(n-p) * fatorial(p));
}

int main () {
    int operacao, n, p;
    cout << "ola! digite o numero correspondente a operacao que deseja realizar \n(1 = permutacao)\n(2 = arranjo)\n(3 = combinacao simples)\n(0 = encerrar programa)" << endl;
    cin >> operacao;

    if (operacao == 1){
        cout << "voce escolheu permutacao! digite o valor de n: ";
        cin >> n;
        cout << endl << "P(" << n << ") = " << permutacao(n) << endl;
        return main();

    } else if (operacao == 2) {
        cout << "voce escolheu arranjo! digite o valor de n e de p: ";
        cin >> n >> p;
        n = float(n);
        p = float(p);
        cout << endl << "A(" << n << ", " << p << ") = " << arranjo(n,p) << endl;
        return main();

    } else if (operacao == 3) {
        cout << "voce escolheu combinacao! digite o valor de n e de p: ";
        cin >> n >> p;
        n = float(n);
        p = float(p);
        cout << endl << "C(" << float(n) << ", " << float(p) << ") = " << combinacao(n,p) << endl;
        return main();

    } else if (operacao == 0) {
        cout << "ENCERRANDO PROGRAMA!" << endl;

    } else if (operacao != 1 || operacao != 2 ||  operacao != 3 ||  operacao != 0){
        cout << "OPERACAO INVALIDA!" << endl;
        return main();
    }

    return 0;
}