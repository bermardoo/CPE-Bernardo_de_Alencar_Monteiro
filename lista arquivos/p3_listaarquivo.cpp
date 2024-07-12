// arquivos questao 3 - bernardo de alencar monteiro - 241008460
#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <limits>

using namespace std;

int main() {
    ifstream alturaFile("altura.txt");
    ifstream pesoFile("peso.txt");

    if (!alturaFile.is_open() || !pesoFile.is_open()) {
        cerr << "ERRO ao abrir um dos arquivos altura.txt ou peso.txt!" << endl;
        return 1;
    }

    map<string, double> alturas;
    map<string, double> pesos;

    string codigo;
    double medida;

    while (getline(alturaFile, codigo) && alturaFile >> medida) {
        alturas[codigo] = medida;
        alturaFile.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    while (getline(pesoFile, codigo) && pesoFile >> medida) {
        pesos[codigo] = medida;
        pesoFile.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    alturaFile.close();
    pesoFile.close();

    string pessoaMaiorAltura;
    double maiorAltura = -1.0;

    for (const auto& entry : alturas) {
        if (entry.second > maiorAltura) {
            maiorAltura = entry.second;
            pessoaMaiorAltura = entry.first;
        }
    }

    string pessoaMaiorPeso;
    double maiorPeso = -1.0;

    for (const auto& entry : pesos) {
        if (entry.second > maiorPeso) {
            maiorPeso = entry.second;
            pessoaMaiorPeso = entry.first;
        }
    }

    if (!alturas.empty()) {
        cout << "\npessoa com a maior altura:" << endl;
        cout << "codigo: " << pessoaMaiorAltura << ", altura: " << maiorAltura << " metros" << endl;
    } else {
        cout << "NENHUM dado de altura foi encontrado!" << endl;
    }

    if (!pesos.empty()) {
        cout << "\npoessoa com o maior peso:" << endl;
        cout << "codigo: " << pessoaMaiorPeso << ", peso: " << maiorPeso << " quilogramas" << endl;
    } else {
        cout << "NENHUM dado de peso foi encontrado!" << endl;
    }

    return 0;
}