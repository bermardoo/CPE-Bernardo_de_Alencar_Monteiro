// Bernardo de Alencar Monteiro | matricula 241008460 | lista 7 (strings) questao 2

#include <iostream>
#include <string>
#include <vector>

using namespace std;

string extrairSenha (const string& ra) {
    if (ra.size() != 20 || ra.substr(0,2) != "RA") {
        return "INVALID DATA";
    }

    string parteNum = ra.substr(2);
    
    for (char c : parteNum) {
        if (!isdigit(c)) {
            return "INVALID DATA";
        }
    }

    size_t pos = parteNum.find_first_not_of('0');

    if (pos == string::npos){
        return "0";
    }

    return parteNum.substr(pos);
}

int main () {
    int N;
    cin >> N;
    cin.ignore();

    vector<string> results;
    for (int i = 0; i < N; i++) {
        string ra;
        getline(cin, ra);
        results.push_back(extrairSenha(ra));
    }

    for (const string& result : results) {
        cout << result << endl;
    }

    return 0;
}