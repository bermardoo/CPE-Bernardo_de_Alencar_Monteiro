#include <iostream>
using namespace std;

int main (){
    // 1. inicialização
    float preco, total;
    int produto, quantidade;
    total = 0;
    quantidade = 0;
    bool controle = 1;

    // 2. processamento
    while (controle == 1) {
        cout << "digite o produto desejado (1-5) ou 0 para sair: " << endl;
        cin >> produto;

        switch (produto) {
            case 0:
                controle = 0;
                break;
            case 1:
                preco = 2.98;
                break;
            case 2:
                preco = 4.5;
                break;
            case 3:
                preco = 9.98;
                break;
            case 4:
                preco = 4.49;
                break;
            case 5:
                preco = 6.87;
                break;
            default:
                cout << "este numero nao indica nenhum produto" << endl;
                break;
        }
        if (controle == 0){
            break;
        }

        if (produto >= 1 && produto <= 5) {
            cout << "digite a quantidade desejada: " << endl;
            cin >> quantidade;

        }
        total += preco * (float) quantidade;
    }
    
    // 3. finalização
    cout << "o valor total da venda foi de: " << total << endl;
    return 0;
}