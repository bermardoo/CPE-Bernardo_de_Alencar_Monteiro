#include<iostream>
using namespace std;

int main(){
	float km;
	float litros;
	
	cout << "por favor, insira o numero de quilometros rodados com um tanque cheio: " << endl;
	cin >> km;
	
	cout << "obrigado, agora insira quantos litros o seu carro possui com um tanque cheio: " << endl;
	cin >> litros;
	
	cout << "a media do consumo de cada tanque e de: " << km/litros << "km/litros.";	
	
	return 0;
}
