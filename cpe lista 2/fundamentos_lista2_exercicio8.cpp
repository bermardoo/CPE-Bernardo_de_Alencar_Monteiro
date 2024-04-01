#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int a;
	int b;
	
	cout<< "insira o valor dos dois catetos de seu triangulo: \n";
	cin>> a;
	cin>> b;
	int c= a*a+b*b;
	cout<< "aqui esta o valor da sua hipotenusa: " << sqrt(c);
}
