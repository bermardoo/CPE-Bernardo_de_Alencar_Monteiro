#include<iostream>
#include<string>
using namespace std;

int main(){
	string caractere;
	
	cout << "por favor, digite um caractere e direi se ele e uma vogal ou nao" << endl;
	cin >> caractere;
	
	for (char& c : caractere){
		switch (c){
			case 'a':
				cout << "seu caractere e vogal";
				break;
			case 'e':
				cout << "seu caractere e vogal";
				break;
			case 'i':
				cout << "seu caractere e vogal";
				break;
			case 'o':
				cout << "seu caractere e vogal";
				break;
			case 'u':
				cout << "seu caractere e vogal";
				break;
			default:
				cout << "seu caractere nao e vogal";
		}
	}
	
	return 0;
}
