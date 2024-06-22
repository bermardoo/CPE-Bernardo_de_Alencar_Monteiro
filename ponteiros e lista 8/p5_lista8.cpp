// Bernardo de Alencar Monteiro | matricula 241008460 | lista 8 (ponteiros) questao 5

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool isLucky(int n) {
    string str = to_string(n);
    for (char c : str) {
        if (c != '4' && c != '7') {
            return false;
        }
    }
    return true;
}

void generateLuckyNumbers(long long limit, vector<long long>& luckyNumbers, long long currentNumber = 0) {
    if (currentNumber > 0) {
        luckyNumbers.push_back(currentNumber);
    }
    if (currentNumber <= limit / 10) {
        generateLuckyNumbers(limit, luckyNumbers, currentNumber * 10 + 4);
        generateLuckyNumbers(limit, luckyNumbers, currentNumber * 10 + 7);
    }
}

int main() {
    vector<long long> luckyNumbers;
    long long limit = 1000000000LL;
    generateLuckyNumbers(limit, luckyNumbers);

    sort(luckyNumbers.begin(), luckyNumbers.end());

    long long N;
    while (cin >> N) {
        if (isLucky(N)) {
            cout << "sortudo" << endl;
        } else {
            bool isAlmostLucky = false;
            for (long long lucky : luckyNumbers) {
                if (N % lucky == 0) {
                    isAlmostLucky = true;
                    break;
                }
            }
            if (isAlmostLucky) {
                cout << "quase sortudo" << endl;
            } else {
                cout << "azarado" << endl;
            }
        }
    }

    return 0;
}