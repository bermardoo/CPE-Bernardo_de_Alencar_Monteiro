#include<iostream>
using namespace std;

int main() {
    int num1, num2, num3, num4, num5;
    string a1, a2, a3, a4, a5;

    cout << "digite 5 numeros de 1 a 30" << endl;
    cin >> num1;
    cin >> num2;
    cin >> num3;
    cin >> num4; 
    cin >> num5;

    for(int i = 1; i <= num1; ++i){
        a1 += "*";
    }
    for(int i = 1; i <= num2; ++i){
        a2 += "*";
    } 
    for(int i = 1; i <= num3; ++i){
        a3 += "*";
    }
    for(int i = 1; i <= num4; ++i){
        a4 += "*";
    } 
    for(int i = 1; i <= num5; ++i){
        a5 += "*";
    } 

    cout << a1 << "  " << a2 << "  " << a3 << "  " << a4 << "  " << a5;

    return 0;
}