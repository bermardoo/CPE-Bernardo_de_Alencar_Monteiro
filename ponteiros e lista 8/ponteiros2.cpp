#include <iostream>
using namespace std;

int main () {
    int **mat;
    int size = 5;

    mat = new int*[size]; // alocacao de memoria para as colunas 

    for (int i = 0; i < size; i++) {
        mat[i] = new int[size]; // alocacao de memoria para as linhas
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            *(*(mat + i) + j) = i;
        }
    }

    for (int i = 0; i < size; i++) {
        for (int k = 0; k < size; k++) {
            cout << mat[i][k] << "\t";
        }
        cout << endl;
    }

    return 0;
}