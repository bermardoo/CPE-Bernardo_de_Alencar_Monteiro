#include<iostream>
using namespace std;

int main(){
	int num, numOriginal, numReverso = 0;
	
	cout << "digite um numero de cinco digitos e direi se ele e um palindromo: ";
	cin >> num;
	
	numOriginal = num;
	
	//verificando se o numero tem 5 digitos
	if (num >= 10000 && num <= 99999) {
		while (num > 0){
			numReverso = (numReverso * 10) + (num % 10); //monta o numero invertido
			num /= 10; // tira o ultimo digito do numero original
		}
	
	if (numOriginal == numReverso) {
		cout << "o numero e um palindromo";
	} else {
		cout << "seu numero nao e um palindromo";
	}
	} else {
		cout << "o numero nao possui cinco digitos";
	}
	
	return 0;
}
