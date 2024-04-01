#include<iostream>
using namespace std;

int main(){
	int a;
	int b;
	
	cout<< "por favor, digite dois numeros para saber se o primeiro e multiplo do segundo: \n";
	cin >> a >> b;
	
	if(a == b){
		cout << "sim\n";
	}
	if(a%b == 0){
		cout << "sim\n";
	}
	if(a%b != 0){
		cout << "nao\n";
	}
	
	return 0;
}
