#include<iostream>
using namespace std;

float fahrenheit(int n){ // crio a funcao em float para poder abrigar uma casa decimal
        return (9.0/5.0) * n + 32.0;
    }

int main(){

    cout << "vou te mostrar uma tabela que possui todas as conversoes de celsius para fahrenheit (de 0C ate 100C)" << endl;

    for (int cel = 0; cel <=100; cel++){ // vou fazendo um "somatorio" de todos os valores possiveis de 0 ate 100 celsius
        cout << cel << "C = " << fahrenheit(cel) << "F." << endl;
    }
    return 0;
}