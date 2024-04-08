#include<iostream>
using namespace std;

int main(){
	int a;
	int b;
	int c;
	
	cout << "digite as medidas dos 3 lados de um triangulo qualquer: " << endl;
	cin >> a >> b >> c;
	
	if (a==b && a==c && b==c){
		cout << "o seu triangulo e equilatero" << endl;
	}
	else if ((a==b && a!=c && b!=c) || (a==c && a!=b && c!=b) || (b==c && b!=a && c!=a)){
		cout << "o seu triangulo e isosceles" << endl;
	}
	else if (a!=b!=c){
		cout << "o seu triangulo e escaleno" << endl;
	}
	
	return 0;
}
