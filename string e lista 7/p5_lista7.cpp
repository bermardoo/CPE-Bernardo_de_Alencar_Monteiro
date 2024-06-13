// Bernardo de Alencar Monteiro | matricula 241008460 | lista 7 (strings) questao 5

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main () {
    int N, M;
    cin >> N >> M;

    string from[200], to[200];
    for (int i = 0; i < M; i++) {
        cin >> from[i] >> to[i];
    }

    string bacteria = "A";

    for (int seg = 0; seg < N; seg++) {
        string nova_bacteria = "";
        int i = 0;

        while (i < bacteria.size()) {
            int j = i;
            while (j < bacteria.size() && bacteria[j] == bacteria[i]) {
                j++;
            }

            string group = bacteria.substr(i, j-i);

            for (int k = 0; k < M; k++) {
                if (from[k] == group) {
                    nova_bacteria += to[k];
                    break;
                }
            }

            i = j;
        }

        bacteria = nova_bacteria;
    }

    int countA = count(bacteria.begin(), bacteria.end(), 'A');
    int countB = count(bacteria.begin(), bacteria.end(), 'B');

    cout << countA << " " << countB << endl;

    return 0;
}