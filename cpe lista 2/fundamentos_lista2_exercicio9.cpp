#include<iostream>
using namespace std;

int main(){
	float km, valor;
	
	cout<< "calcule o valor do seu aluguel de automovel! digite quantos km voce rodou: ";
	cin>> km;
	
	if(km <= 50){
		valor = km*1.75;
	}
	else if (km <= 150){
		valor = 87.5 + ((km-50)*1.65);
	}
	else {
		valor = 252.5 + ((km-150)*1.5);
	}
	cout << "o valor pago vai ser: " << valor << endl << "o valor medio por quilometro sera de:" << valor/km;
}
