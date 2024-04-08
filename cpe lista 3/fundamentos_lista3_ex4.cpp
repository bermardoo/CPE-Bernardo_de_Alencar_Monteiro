#include<iostream>
using namespace std;

int main(){
	int numBin, numDec = 0, base = 1, resto;
	
	cout << "digite um numero em binario: ";
	cin >> numBin;
	
	//conversao de binario para decimal
	while (numBin > 0) {
		resto = numBin % 10;
		numDec += resto * base;
		base *= 2;
		numBin /= 10;
	}
	
	cout << endl << "seu numero em decimal e: " << numDec;
	
	return 0;
}
