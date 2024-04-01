#include<iostream>
using namespace std;

int main(){
	int p, num, div=0;
	
	cout<< "insira um numero e direi se ele e primo ou nao: \n";
	cin>> num;
	
	for (p=1 ; p<=num ; p++){
		if(num%p==0){
			div++;
		}}
	
	if(div==2){
		cout << "e primo\n";
	}
	else{
		cout<<"nao e primo\n";
	}
	
	return 0;
}
