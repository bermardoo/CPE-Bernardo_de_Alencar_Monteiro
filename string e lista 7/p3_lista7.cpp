// Bernardo de Alencar Monteiro | matricula 241008460 | lista 7 (strings) questao 3

#include <iostream>
#include <string>
#include <vector>

using namespace std;

string decifrarNome (const string& nomeMix1, const string& nomeMix2) {
    string nome;

    int len1 = nomeMix1.length();
    int len2 = nomeMix2.length();

    int index = 0;

    while (index < len1 || index < len2) {
        if (index < len1) {
            nome += nomeMix1.substr(index, 2);
        }

        if (index < len2) {
            nome += nomeMix2.substr(index, 2);
        }

        index += 2;
    }

   return nome;
}

int main() {
    int n;
    cin >> n;
    cin.ignore();

    vector<string> results;

    for (int i = 0; i < n; i++) {
        string nomeMix1, nomeMix2;
        getline(cin, nomeMix1);
        getline(cin, nomeMix2);

        results.push_back(decifrarNome(nomeMix1, nomeMix2));
    }

    for (const string& result : results) {
        cout << result << endl;
    }

    return 0;
}