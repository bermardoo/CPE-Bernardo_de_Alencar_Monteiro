// arquivos questao 4 - bernardo de alencar monteiro - 241008460
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cstdlib>

using namespace std;

void cadastrarAluno() {
    string nomeAluno, matricula;
    cout << "\ndigite o nome do aluno: ";
    cin >> nomeAluno;
    cout << "\ndigite a matricula do aluno: ";
    cin >> matricula;

    ifstream file(nomeAluno + ".txt");
    if (file.good()) {
        cout << "\naluno ja cadastrado!" << endl;
        file.close();
    } else {
        ofstream outfile(nomeAluno + ".txt");
        if (outfile.is_open()) {
            outfile << matricula << endl;
            cout << "\naluno cadastrado com sucesso!" << endl;
            outfile.close();
        } else {
            cerr << "\nERRO ao criar o arquivo para o aluno!" << endl;
        }
    }
}

void adicionarNota() {
    string nomeAluno;
    double nota;
    cout << "\ndigite o nome do aluno: ";
    cin >> nomeAluno;

    ifstream infile(nomeAluno + ".txt");
    if (!infile.good()) {
        cout << "\naluno nao cadastrado!" << endl;
        infile.close();
        return;
    }

    cout << "\ndigite a nota do aluno: ";
    cin >> nota;

    ofstream outfile(nomeAluno + ".txt", ios::app);
    if (outfile.is_open()) {
        outfile << nota << endl;
        cout << "\nnota adicionada com sucesso!!" << endl;
        outfile.close();
    } else {
        cerr << "\nERRO ao abrir o arquivo do aluno para adicionar nota!" << endl;
    }
}

void calcularMedia() {
    string nomeAluno;
    cout << "\ndigite o nome do aluno: ";
    cin >> nomeAluno;

    ifstream infile(nomeAluno + ".txt");
    if (!infile.is_open()) {
        cout << "\naluno nao cadastrado!" << endl;
        return;
    }

    double nota, soma = 0.0;
    int count = 0;
    bool primeiraLinha = true;
    while (infile >> nota) {
        if (!primeiraLinha) { 
            soma += nota;
            count++;
        } else {
            primeiraLinha = false;
        }
    }
    infile.close();

    if (count > 0) {
        double media = soma / count;
        cout << "\nmedia do aluno " << nomeAluno << ": " << media << endl;
    } else {
        cout << "\nNENHUMA nota cadastrada para o aluno!" << endl;
    }
}

int main() {
    int opcao;

    do {
        cout << "\nMENU:" << endl;
        cout << "1. cadastrar aluno" << endl;
        cout << "2. adicionar nota de um aluno" << endl;
        cout << "3. calcular media de um aluno" << endl;
        cout << "4. fechar o programa" << endl;
        cout << "escolha uma opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cadastrarAluno();
                break;
            case 2:
                adicionarNota();
                break;
            case 3:
                calcularMedia();
                break;
            case 4:
                cout << endl << "ENCERRANDO PROGRAMA" << endl;
                break;
            default:
                cout << endl << "opcao invalida!!\ntente novamente!!" << endl;
        }
    } while (opcao != 4);

    return 0;
}