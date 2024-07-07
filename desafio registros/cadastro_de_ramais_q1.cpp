// ramais questao 1 - bernardo de alencar monteiro - 241008460
#include <iostream>
#include <cstring>
#include <unistd.h>
#include <ctype.h>

using namespace std;

const int iTam = 3;

int iQtdRegistros = 0;

struct Categoria {
    int    iCodCategoria;
    string sNomeCategoria;
};

struct Setor {
    string sSetor;
};

struct Localizacao {
    int    iCodLocal;
    string sNomeLocal;
};

struct CadRamal{
   int         iNumRamal;   //range entre 1000 e 2999
   Categoria   VarCategoria;//conforme struct Categorias
   Setor       VarSetor;    //conforme struct Setor
   Localizacao VarLocal;    //conforme struct Localizacao
   string      sSalaRamal;  //numero do andar e mais dois digitos (sequencial).
   string      sRespRamal;  //necessario apenas o primeiro nome (usuario do Ramal).
   string      sRespAteste; //necessáario apenas o primeiro nome (usuario que atesta fatura).
};
    
void CadastroDeRamais (CadRamal *Ramal, CadRamal *pVetor); 

bool VerificaRamal (CadRamal *pVetor, int &pAux);

void ImprimirCadastroDeRamais (CadRamal *pVetor);

int main () {
    
    CadRamal VarCadRamal;
 
    CadRamal iVetor[5];//criando um vetor do tipo CadRamal com x elementos
    
    CadRamal *pPonte;//criando um ponteiro para CadRamal

    pPonte = &VarCadRamal;//inicializando o ponteiro com o endereço do tipo CadRamal
        
    if (iQtdRegistros == iTam) {
        cout << "\n=======================================================";                
        cout << "\n     NAO HA ESPACO LIVRE PARA NOVOS CADASTROS!";
        cout << "\n=======================================================";
        sleep (4);
        return 0;
    }

    for (int i = 0; i < iTam; i++) {
        CadastroDeRamais (pPonte, &iVetor[i]);
        iVetor[i] = VarCadRamal;
        iQtdRegistros += 1;
    }

    for (int i = 0; i < iTam; i++) {
        system ("clear");
        cout << "\n==============================================================";
        cout << "\nIMPRESSAO DO CADASTRO DE RAMAIS DO MINISTERIO DO MEIO AMBIENTE";
        cout << "\n==============================================================" << endl;
        
        ImprimirCadastroDeRamais (&iVetor[i]);
    }
    
    return 0;
}

void CadastroDeRamais (CadRamal *pRamal, CadRamal *pVetor) {

    system("clear");
    
    cout << "\n=================================================";
    cout << "\nCADASTRO DE RAMAIS DO MINISTEERIO DO MEIO AMBIENTE";
    cout << "\n=================================================\n";

    int iAux = 0;

    do {//Entrada e crítica do número do ramal
        cout << "\ninforme o numero do ramal entre 1000 e 3000 = ";
        cin  >> iAux;
        
        //primeira crítica 
        if (iAux < 999 || iAux > 2999) {
           cout << "\nnumero do ramal fora do intervalo 1000 ate 2999\n";
           sleep (2);
        }

        pVetor = pRamal;//incializando o vetor

        //criticar se o ramal já está cadastrado        
        if (!VerificaRamal(pVetor, iAux)) {
           cout << "\nnumero do ramal ja esta cadastrado\n";
           sleep (1);
           iAux = -1;//flag
        }

        if (iAux != -1) {
           pRamal->iNumRamal = iAux;
        }
        
    } while (iAux < 999 || iAux > 2999);

    do {//entrada e crítica da categoria
        cout << "\ninforme o codigo da categoria entre 0 e 6 = ";
        cin  >> pRamal->VarCategoria.iCodCategoria;
        cin.ignore();
        //segunda crítica 
        if (pRamal->VarCategoria.iCodCategoria < 0 || pRamal->VarCategoria.iCodCategoria > 6) {
           cout << "\ncodigo da categoria fora do intervalo 0 ate 6\n";
           sleep (2);
        }
        
    } while (pRamal->VarCategoria.iCodCategoria < 0 || pRamal->VarCategoria.iCodCategoria > 6);
    
    cout << "\ninforme a descricao da categoria = ";
    getline (cin, pRamal->VarCategoria.sNomeCategoria);
    
    //garantindo que seja tudo seja letras maíusculas
    for (auto &letra: pRamal->VarCategoria.sNomeCategoria){
        letra = toupper (letra); 
    }
 
    do {//entrada e crítica do setor
        cout << "\ninforme a descricao do setor = ";
        getline(cin, pRamal->VarSetor.sSetor);

        //terceira crítica 
        if (pRamal->VarSetor.sSetor == " ") {
           cout << "\ndescrição do setor deve ser preenchida\n";
           sleep (2);
        }
        
    } while (pRamal->VarSetor.sSetor == " ");
    
    //garantindo que seja tudo seja letras maíusculas
    for (auto &letra: pRamal->VarSetor.sSetor) {
        letra = toupper (letra); 
    }

    do {//entrada e crítica da categoria

        cout << "\ninforme o codigo da localizacao 500 ou 505 = ";
        cin  >> pRamal->VarLocal.iCodLocal;
        cin.ignore();
        
        //quarta crítica 
        if (pRamal->VarLocal.iCodLocal != 500 && pRamal->VarLocal.iCodLocal != 505) {
           cout << "\ncodigo da localizacao diferente de 500 ou 505\n";
           sleep(2);
        }
        
    } while (pRamal->VarLocal.iCodLocal != 500 && pRamal->VarLocal.iCodLocal != 505);
    
    cout << "\ninforme a descricao da localizacao = ";
    getline (cin, pRamal->VarLocal.sNomeLocal);

    //garantindo que seja tudo seja letras maíusculas
    for (auto &letra: pRamal->VarLocal.sNomeLocal) {
        letra = toupper(letra); 
    }

    do {//entrada e crítica da sala
        cout << "\ninforme o numero do andar + o numero da sala = ";
        getline(cin, pRamal->sSalaRamal);

        //quinta crítica 
        if (pRamal->sSalaRamal == " "){
           cout << "\nnumero do andar + o numero da sala deve ser preenchido\n";
           sleep(2);
        }
        
    } while (pRamal->sSalaRamal == " ");

    do {//entrada e crítica do Responsável pelo ramal
        cout << "\ninforme o nome do responsavel pelo ramal = ";
        getline(cin, pRamal->sRespRamal);

        //sexta crítica 
        if (pRamal->sRespRamal == " ") {
           cout << "\no nome do responsavel pelo ramal deve ser preenchido\n";
           sleep (2);
        }
        
    } while (pRamal->sRespRamal == " ");
    
    //garantindo que seja tudo seja letras maíusculas
    for (auto &letra: pRamal->sRespRamal) {
        letra = toupper(letra); 
    }

    do {//entrada e crítica do Responsável pelo ramal
        cout << "\ninforme o nome do responsavel pelo ateste = ";
        getline (cin, pRamal->sRespAteste);

        //sétima crítica 
        if (pRamal->sRespAteste == " ") {
           cout << "\no nome do responsavel pelo ateste deve ser preenchido\n";
           sleep(2);
        }
        
    } while (pRamal->sRespAteste == " ");
    
    //garantindo que seja tudo seja letras maíusculas
    for (auto &letra: pRamal->sRespAteste) {
        letra = toupper(letra); 
    }

    return;
}

//Pesquisa por Ramal - crítica do cadastro
bool VerificaRamal (CadRamal *pVetor, int &pAux) {

    for (int i = 0; i < iTam; i++) {  
        if (pVetor[i].iNumRamal == pAux) {
           return false;//nada feito - ramal já cadastrado
        }
    }

    return true;    
}

//procedimento para imprimir o cadastro
void ImprimirCadastroDeRamais (CadRamal *pVetor) {
    
    cout << "\nRamal                  : " << pVetor->iNumRamal;
    cout << "\nCategoria              : " << pVetor->VarCategoria.iCodCategoria
         << " - ";
    cout << pVetor->VarCategoria.sNomeCategoria;
    cout << "\nSetor                  : " << pVetor->VarSetor.sSetor;
    cout << "\nEdificio               : " << pVetor->VarLocal.iCodLocal
         << " - ";
    cout << pVetor->VarLocal.sNomeLocal;
    cout << "\nSala                   : " << pVetor->sSalaRamal;
    cout << "\nResponsavel pelo Ramal : " << pVetor->sRespRamal;
    cout << "\nResponsavel pelo Ateste: " << pVetor->sRespAteste;
    cout << "\n==============================================================\n";
    
    sleep(2);//aguarda 10 segundos
    return; //este comando é opcional em um procedimento do tipo void
}