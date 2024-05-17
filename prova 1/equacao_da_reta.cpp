// Bernardo de Alencar Monteiro (241008460) - Prova 1 - Questão 2

#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    float x1, y1, x2, y2, x3, y3;
    cout << "me diga as coordenadas de 3 pontos e direi se o terceiro faz parte da reta que passa pelos dois primeiros!\ndigite o primeiro ponto (valor de x e valor de y):";    
    cin >> x1 >> y1;
    cout << "\nagora me diga as coordenadas do segundo ponto: ";
    cin >> x2 >> y2;
    cout << "\nagora me diga as coordenadas do terceiro ponto: ";
    cin >> x3 >> y3;

    float a1 = (y2-y1)/(x2-x1) * 1.00; // multipliquei por 1.00 para garantir que tenham duas casas decimais
    float b1 = y1 - a1 * x1;
    float b2 = y2 - a1 * x2;
    float a2 = (y3-y1)/(x3-x1) * 1.00;
    float b3 = y3 - a2 * x3;
    
    if (b1 == b2) {
        cout << "y = " << fixed << setprecision(2) << a1 << " * x + (" << fixed << setprecision(2) << b1 << ")" << endl;
    }
    
    if ((a2 == a1) && ((b3 == b2)||(b3 == b1))) {
        cout << endl << "o ponto de coordenadas (" << fixed << setprecision(2) << x3 << ", " << fixed << setprecision(2) << y3 << ") pertence a reta";
    } else {
        cout << endl << "o ponto de coordenadas (" << fixed << setprecision(2) << x3 << ", " << fixed << setprecision(2) << y3 << ") nao pertence a reta";
    }

    return 0;
}