#include <iostream>
#include <string> //pra usar string
#include <algorithm> //converter strings minusculas para maiusculas e outras coisas
using namespace std;

int main () {
    string s1 = "o senhor eh meu pastor e nada me faltara";
    cout << s1[0] << endl;
    cout << s1[5] << endl;

    string s2;
    //cin >> s2;
    getline(cin,s2);
    cout << s2 << endl;

    cout << s1.size() << " - " << s1.length() << endl;

    string s3;

    s3 = s1 + " " + s2;

    cout << s3 << endl;

    if (s1 == s1) {
        cout << "s1 == s1" << endl;
    }
    if (s1 > s2) {
        cout << "s1 > s2" << endl;
    }
    if (s1 > s3) {
        cout << "s1 > s3" << endl;
    }
    if (s2 > s3) {
        cout << "s2 > s3" << endl;
    }

    string s4;
    s4 = s1;
    s4[21] = 's';

    cout << s4 << endl;

    if (s4 == s1) {
        cout << "s4 == s1" << endl;
    }

    //estudar a parte de tamanhos!!

    string s5 = "as";
    string s6 = "s";
    
    if (s5 > s6) {
        cout << "s5 > s6" << endl;
    }

    transform(s3.begin(), s3.end(), s3.begin(), ::toupper);

    cout << s3 << endl;
 
    //estudar tudo abaixo!!

    size_t pos;

    string substring = "ME";

    pos = s3.find(substring);

    if (pos == string::npos) {
        cout << substring << " nao esta em s3 " << endl;
    } else {
        cout << substring << " esta em s3 " << endl;
    }

    return 0;
}