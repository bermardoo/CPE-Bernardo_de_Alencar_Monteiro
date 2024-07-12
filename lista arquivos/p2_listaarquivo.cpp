// arquivos questao 2 - bernardo de alencar monteiro - 241008460
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream inputFile("mochileiro.txt");

    if (!inputFile.is_open()) {
        cerr << "ERRO ao abrir o arquivo mochileiro.txt!" << endl;
        return 1;
    }

    char targetChar;
    cout << "informe o caractere a ser contado: ";
    cin >> targetChar;

    string line;
    int lineNumber = 1;

    while (getline(inputFile, line)) {
        int count = 0;
        for (char ch : line) {
            if (ch == targetChar) {
                count++;
            }
        }
        cout << "Linha " << lineNumber << ": " << count << " ocorrencias de '" << targetChar << "'" << endl;
        lineNumber++;
    }

    inputFile.close();
    return 0;
}