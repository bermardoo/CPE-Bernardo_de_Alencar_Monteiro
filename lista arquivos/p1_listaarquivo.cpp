// arquivos questao 1 - bernardo de alencar monteiro - 241008460
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

int main() {
    ifstream inputFile("vetores.txt");
    ofstream outputFile("soma.txt");

    if (!inputFile.is_open()) {
        cerr << "ERRO ao abrir o arquivo vetores.txt!" << endl;
        return 1;
    }

    string line;
    vector<int> sumVector;

    while (getline(inputFile, line)) {
        istringstream iss(line);
        vector<int> currentVector;
        int number;

        while (iss >> number) {
            currentVector.push_back(number);
        }

        if (sumVector.size() < currentVector.size()) {
            sumVector.resize(currentVector.size(), 0);
        }

        for (size_t i = 0; i < currentVector.size(); ++i) {
            sumVector[i] += currentVector[i];
        }
    }

    for (size_t i = 0; i < sumVector.size(); ++i) {
        outputFile << sumVector[i];
        if (i < sumVector.size() - 1) {
            outputFile << " ";
        }
    }

    inputFile.close();
    outputFile.close();

    cout << "a soma dos vetores está salva no soma.txt!" << endl;
    return 0;
}