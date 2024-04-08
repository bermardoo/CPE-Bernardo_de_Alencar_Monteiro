#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int main(){
	float num1, num2;
	string operacao;
	
	cout << "por favor digite dois numeros reais: " << endl;
	cin >> num1 >> num2;
	
	cout << "por favor, escolha a operacao a ser feita (podendo se +,-,* e /)" << endl;
	cin >> operacao;
	
	for (char& c : operacao){
		switch (c){
			case '+':
				cout << num1 + num2 << endl;
				break;
			case '-':
				cout << num1 - num2 << endl;
				break;
			case '*':
				cout << num1 * num2 << endl;
				break;
			case '/':
				cout << num1 / num2 << endl;
				break;
		}
	}
	
	return 0;
}
