#include<iostream>
using namespace std;

int main(){
	float gas;
	float alcool;
	
	cout << "por favor, insira o preco do litro da gasolina: " << endl;
	cin >> gas;
	
	cout << "obrigado, agora insira o preco do litro do alcool: " << endl;
	cin >> alcool;
	
	float calculo = alcool/gas;
	
	if (calculo <= 0.7){
		cout << "recomendo abastecer com alcool";
	} else {
		cout << "recomendo abastecer com gasolina";
	}
	
	return 0;
}
