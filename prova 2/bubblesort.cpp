/*
Bernardo de Alencar Monteiro - 241008460 - bubble sort - prova 2 CPE
*/

#include <iostream>
using namespace std;

#define x 10

void bubbleSort (int A[], int tam) {
    bool trocado;

    do {
        trocado = false;
        
        for (int i = 0; i < tam; i++) {
            if (A[i] > A[i + 1]) { // trocando os numeros de lugar
                int temp = A[i];
                A[i] = A[i + 1];
                A[i + 1] = temp;
                trocado = true;
            }
        }
    } while (trocado);
}

int main () {
    int A[x];
    int contador = 0;

    cout << "por favor insira 10 numeros inteiros e positivos" << endl;

    for (int i = 0; i < 10; i++) { // recebendo os numeros
        int num;
        cin >> num;

        if (num < 0) { // verificando se existe algum número negativo
            break;
        }
        A[contador++] = num; // inserindo no vetor
    }
    
   bubbleSort(A, x); // usando a funcao

    cout << "\naqui estão os seus numeros reordenados do menor para o maior:";

    for (int i = 0; i < 10; i++) {
        cout << A[i] << " ";
    }

    cout << endl;

    return 0;
}