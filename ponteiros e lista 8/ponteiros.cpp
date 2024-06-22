//aula ponteiros (14/06/2024)
#include <iostream>

using namespace std;

int main () {
    int n = 5;
    int *p1;
    p1 = &n; // p1 recebe o endereco de n;

    cout << &n << endl; // endereco do n;
    cout << p1 << endl; // o endereco de p1 != endereco de n;
    cout << &p1 << endl; // endereco do p1;
    cout << *p1 << endl;

    int v[10];

    for (int i = 0; i < 10; i++) {
        v[i] = i*2;
    }

    int *p2;
    int *p3;
    p2 = new int;
    p3 = v;


    for (int i = 0; i < 10; i++) {
        *(p2 + i) = i;
    }
   
   for (int i = 0; i < 10; i++) {
        cout << p2[i] << "\t";
    }

    cout << endl;

    for (int i = 0; i < 10; i++) {
        cout << p3[i] << endl;
    }

    return 0;
}