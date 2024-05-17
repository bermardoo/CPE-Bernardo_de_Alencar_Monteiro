// Bernardo de Alencar Monteiro | matricula 241008460 | lista 6 questao 5

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int C;  // Coluna escolhida
    char T; // Operação (Soma ou Média)
    double M[12][12]; // Matriz 12x12
   
    cin >> C >> T; // Leitura da coluna e da operação
    
    for(int i = 0; i < 12; i++) {
        for(int j = 0; j < 12; j++) {
            cin >> M[i][j]; // Leitura dos elementos da matriz
        }
    }
   
    double sum = 0; // Inicializa a soma

    // Loop para somar os elementos da coluna escolhida
   
    for(int i = 0; i < 12; i++) {
        sum += M[i][C]; // Soma os elementos da coluna C
    }

    // Se a operação for média, divide a soma pelo número de linhas (12)
    
    if(T == 'M') {
        cout << fixed << setprecision(1) << sum / 12.0 << endl; // Imprime a média
    } else { // Se a operação for soma, imprime a soma
        cout << fixed << setprecision(1) << sum << endl;
    }

    return 0;
}