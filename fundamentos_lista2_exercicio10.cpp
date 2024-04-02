#include<iostream>
#include<string>

using namespace std;

int main(){
	string palavra;
	cout << "digite uma palavra/termo com exatos 5 caracteres: ";
	cin >> palavra;
	
	if (palavra.length() != 5) {
		cout << "a palavra/termo deve ter exatos 5 caracteres!" << endl;
		return 1;
	}
	
	int vogais[5] = {0}; // indices: a=0, e=1, i=2, o=3, u=4
	
	//contar as vogais
	for(char& c : palavra) {
		switch (c){
			case 'a':
				vogais[0]++;
				break;
			case 'e':
				vogais[1]++;
				break;
			case 'i':
				vogais[2]++;
				break;
			case 'o':
				vogais[3]++;
				break;
			case 'u':
				vogais[4]++;
				break;
		}
	}
	
	// mostrando quantas vezes cada vogal apareceu
	cout << "a quantidade de vezes que apareceu cada vogal e:" << endl;
	cout << "a: " << vogais[0] << endl;
	cout << "e: " << vogais[1] << endl;
    cout << "i: " << vogais[2] << endl;
    cout << "o: " << vogais[3] << endl;
    cout << "u: " << vogais[4] << endl;
    
    // criptografando a string
    for (char& c : palavra) {
    	switch (c) {
    		case 'a':
    			c = 'i';
    			break;
    		case 'e':
    			c = 'o';
    			break;
    		case 'i':
    			c = 'u';
    			break;
		}
	}
	
	cout << "texto criptografado: " << palavra << endl;
	
	return 0;
}
