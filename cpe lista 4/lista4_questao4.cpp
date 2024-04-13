#include <iostream>
#include <iomanip> //permite formatar casa decimais
#include <unistd.h> //permite utilizar a instrução sleep()
using namespace std;

int op, qtd = 0,  qtdtotal = 0;
float valor = 0, valortotal = 0;

float calcvalor(float fvalor, int qtd){

   //calculo do valor vendido    
   fvalor = (fvalor * qtd);
    
   return fvalor;
    
}

int main(){   
    do{
      op = 0;
      qtd   = 0;
      valor = 0;

      cout << "\n\t\tMENU\n"; 
      cout << "\n\t1 - produto 1 - R$ 2,98"; 
      cout << "\n\t2 - produto 2 - R$ 4,50"; 
      cout << "\n\t3 - produto 3 - R$ 9,98"; 
      cout << "\n\t4 - produto 4 - R$ 4,49"; 
      cout << "\n\t5 - produto 5 - R$ 6,87"; 
      cout << "\n\t0 - finalizar operacao"; 
      
      cout << "\n\n\tinforme a opcao desejada: ";
      cin  >> op;
      
      if (op == 0){break;} 
      
      if (op < 0 || op > 5){
         cout << "\n=================\n";
         cout << " opção inválida! ";
         cout << "\n=================\n";
         sleep(3);
         continue;//desvia o controle para a intrução de antes
      }
      
      cout << "\n\n\tInforme a quantidade vendida do Produto <" << op << "> = ";
      cin >> qtd;

      cout << "\n\t========================================";
      cout << "\n\t Valor Vendido do Produto " << op << " foi = ";

      qtdtotal += qtd;
 
      switch (op){
      
          case 1:
            valor = calcvalor(2.98, qtd);
            break;
          case 2:
            valor = calcvalor(4.50, qtd);
            break;
          case 3:
            valor = calcvalor(9.98, qtd);
            break;
          case 4:
            valor = calcvalor(4.49, qtd);
            break;
          case 5:
            valor = calcvalor(6.87, qtd);
            break;
          case 0:
            break;
      }
      
      cout << fixed << setprecision(2) << valor;
      cout << "\n\t========================================\n";      
      sleep(2);

      valortotal += valor;
 
    }while (op >= 0 && op <= 5);
    
    cout << "\n\t==================================================";
    cout << "\n\t A quantidade de Produtos vendidos foi = " 
         << qtdtotal;
    cout << "\n\t Valor total dos Produtos vendidos foi =  " 
         << fixed << setprecision(2) << valortotal;
    cout << "\n\t==================================================\n";         
    
    return 0;
}