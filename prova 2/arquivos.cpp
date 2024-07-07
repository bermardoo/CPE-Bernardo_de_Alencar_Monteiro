/*
Bernardo de Alencar Monteiro - 241008460 - arquivos - prova 2 CPE
*/

#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main () {
    ifstream inputfile ("escrever.txt");
    ofstream outputfile ("soma.txt");

    if (!inputfile) {
        cerr << "erro ao abrir o arquivo de entrada!" << endl;
        return 1;
    }

    if (!outputfile) {
        cerr << "erro ao abrir o arquivo de saida!" << endl;
        return 1;
    }

    string linha;

    while (getline(inputfile, linha)) {
        istringstream iss (linha);
        int num;
        int soma = 0;

        while (iss >> num) {
            soma += num;
        }

        outputfile << soma << endl;
    }

    inputfile.close();
    outputfile.close();

    return 0;
}