#include<iostream>
#include<string>
using namespace std;

int main (){
	string senha;
	
	cout << "por favor, digite a senha:" << endl;
	cin >> senha;
	
	if (senha == "1234"){
		cout << "ACESSO PERMITIDO";
	} else {
		cout << "ACESSO NEGADO";
	}
	
	return 0;
}
