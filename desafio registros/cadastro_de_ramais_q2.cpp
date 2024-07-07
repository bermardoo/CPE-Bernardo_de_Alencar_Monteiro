// ramais questao 2 - bernardo de alencar monteiro - 241008460
#include <iostream>
#include <cstring>
#include <unistd.h>

using namespace std;

const int iTam = 1;

int iQtdRegistros = 0;

struct Categoria {
    int    iCodCategoria;
    string sNomeCategoria;
};

struct Setor {
    string sSetor;
};

struct Edificio {
    int    iCodEdificio;
    string sNomeEdificio;
};

struct CadRamal {
   int         iNumRamal;   
   Categoria   VarCategoria; 
   Setor       VarSetor;     
   Edificio    VarEdificio; 
   string      sSalaRamal;
   string      sRespRamal; 
   string      sRespAteste; 
};
    
void CadastroDeRamais (CadRamal *pRamal, CadRamal *pVetor); 

void ListarCadastroParaPesquisa (CadRamal *pVetor, int &pOpc);

void ImprimirCadastroDeRamais (CadRamal *pVetor);

bool VerificarExistenciaDoRegistro (CadRamal *pVetor, string pAuxiliar, int &pRamal, int pOpc);

int main () {
    CadRamal VarCadRamal;
    CadRamal vVetor[iTam];
    CadRamal *pRamal;

    pRamal = &VarCadRamal;

    int iOpc, iRamal;
    string sAuxiliar = "";

    do {
        
        system("clear");
    
        iOpc = 0;
        cout << "\n\t=======================================";
        cout << "\n\tMENU PARA CADASTRO E PESQUISA DE RAMAIS ";
        cout << "\n\t=======================================\n";
        cout << "\n\t   0 para: Numero do Ramal.";
        cout << "\n\t   1 para: Setor.";
        cout << "\n\t   2 para: Edificio.";
        cout << "\n\t   3 para: Responsavel pelo Ramal.";
        cout << "\n\t   4 para: Responsavel pelo Ateste.";
        cout << "\n\t";       
        cout << "\n\t   5 para: Cadastro de Ramais.";
        cout << "\n\t   6 para: Imprimir o Cadastro.";
        cout << "\n\t";         
        cout << "\n\t   7 para: Finalizar o Programa.";        
        cout << "\n\n\t   Informe a Opcao desejada = ";
        cin >> iOpc;

        switch (iOpc) {
            case 0: 
                do {
                    system("clear");
                    
                    cout << "\n===============";
                    cout << "\nLISTA DE RAMAIS";
                    cout << "\n===============";
                    cout << "\nRamais\n";  
                    
                    for (int i = 0; i < iTam; i++) {            
                        ListarCadastroParaPesquisa (&vVetor[i], iOpc);
                        if (iOpc == -1){break;}
                    }   
                    
                    if (iOpc == -1) { break; }
                    
                    cout << "\n\nDigite o numero do ramal que deseja pesquisar = ";
                    cin >> iRamal;
    
                    if (VerificarExistenciaDoRegistro (vVetor, "", iRamal, iOpc)) {
                        cout << "\nNumero do ramal informado nao cadastrado!\n";
                        sleep (2);

                    } else { 
                        ImprimirCadastroDeRamais (&vVetor[iRamal]);
                        break;
                    }
                    
                } while (true);
                break;
                
            case 1: 
                do {
                    system("clear");
                    
                    cout << "\n================";
                    cout << "\nLISTA DE SETORES";
                    cout << "\n================";
                    cout << "\nSetores\n";  
                    
                    for (int i = 0; i < iTam; i++) {            
                        ListarCadastroParaPesquisa (&vVetor[i], iOpc);    
                        if (iOpc == -1) { break; }
                    }   
                    
                    if (iOpc == -1) { break; }
                    
                    cout << "\n\nDigite o nome do Setor que deseja pesquisar = ";
                    cin >> sAuxiliar;

                    if (VerificarExistenciaDoRegistro(vVetor, sAuxiliar, iRamal, iOpc)) {
                        cout << "\nNome do setor informado nao cadastrado!\n";
                        sleep(2);

                    } else { 
                        ImprimirCadastroDeRamais (&vVetor[iRamal]);
                        break;
                    }
                    
                } while (true);
                break;
                
            case 2:   
                do {
                    system("clear");
                    
                    cout << "\n==================";
                    cout << "\nLISTA DE EDIFICIOS";
                    cout << "\n==================";
                    cout << "\nEdificios\n";  
                    
                    for (int i = 0; i < iTam; i++) {            
                        ListarCadastroParaPesquisa(&vVetor[i], iOpc);    
                        if (iOpc == -1) { break; }
                    }   
                    
                    if (iOpc == -1) { break; }
                    
                    cout << "\n\nDigite o numero do Edificio que deseja pesquisar = ";
                    cin >> iRamal;

                    if (VerificarExistenciaDoRegistro(vVetor, "", iRamal, iOpc)) {
                        cout << "\nEdificio informado nao cadastrado!\n";
                        sleep(2);

                    } else { 
                        ImprimirCadastroDeRamais (&vVetor[iRamal]);
                        break;
                    }
                    
                } while (true);
                break;
                
            case 3:
                do{
                    system("clear");
                    
                    cout << "\n=================================";
                    cout << "\nLISTA DOS RESPONSAVEIS PELO RAMAL";
                    cout << "\n=================================";
                    cout << "\nResponsaveis\n";  
                    
                    for (int i = 0; i < iTam; i++) {            
                        ListarCadastroParaPesquisa (&vVetor[i], iOpc);    
                        if (iOpc == -1) { break; }
                    }   
                    if (iOpc == -1) { break; }
                    
                    cout << "\n\nDigite o nome do Responsavel que deseja pesquisar = ";
                    cin >> sAuxiliar;
    
                    if (VerificarExistenciaDoRegistro(vVetor, sAuxiliar, iRamal, iOpc)) {
                        cout << "\nNome do Responsavel informado nao cadastrado!\n";
                        sleep(2);

                    } else { 
                        ImprimirCadastroDeRamais (&vVetor[iRamal]);
                        break;
                    }
                    
                } while (true);
                break;
                
            case 4:     
                do {
                    system("clear");
                    
                    cout << "\n==================================";
                    cout << "\nLISTA DOS RESPONSAVEIS PELO ATESTO";
                    cout << "\n==================================";
                    cout << "\nResponsaveis\n";  
                    
                    for (int i = 0; i < iTam; i++) {            
                        ListarCadastroParaPesquisa (&vVetor[i], iOpc);    
                        if (iOpc == -1) { break; }
                    }   
                    
                    if (iOpc == -1) { break; }
                    
                    cout << "\n\nDigite o nome do Responsavel que deseja pesquisar = ";
                    cin >> sAuxiliar;
    
                    if (VerificarExistenciaDoRegistro (vVetor, sAuxiliar, iRamal, iOpc)) {
                        cout << "\nNome do Responsavel informado nao cadastrado!\n";
                        sleep(2);

                    } else { 
                        ImprimirCadastroDeRamais (&vVetor[iRamal]);
                        break;
                    }
                    
                } while (true);
                break;
                
            case 5:   
                if (iQtdRegistros == iTam) {
                    cout << "\n=======================================================";                
                    cout << "\n      NAO HA ESPACO LIVRE PARA NOVOS CADASTROS";
                    cout << "\n=======================================================\n";
                    sleep(4);
                    break;
                }
            
                for (int i = 0; i < iTam; i++) {
                    CadastroDeRamais (pRamal, &vVetor[i]);
                    vVetor[i] = VarCadRamal;
                    iQtdRegistros += 1;
                }
                break;
                
            case 6:           
                system("clear");
                
                cout << "\n=============================================================";
                cout << "\nLISTAGEM DO CADASTRO DE RAMAIS DO MINISTERIO DO MEIO AMBIENTE";
                cout << "\n=============================================================";
        
                if (iQtdRegistros == 0) {
                    cout << "\n=======================================================";                
                    cout << "\n       NAO HA REGISTROS CADASTRADOS NO MOMENTO";
                    cout << "\n=======================================================\n";
                    sleep(4);
                    break;
                }
                        
                for (int i = 0; i < iTam; i++) {   
                    ImprimirCadastroDeRamais (&vVetor[i]);
                }   

                break;
                
            case 7: 
                return 0;
                
            default:
                cout << "\n\tOpcao informada invalida!!\n";
                sleep(1);
        }

    } while (true);
    
}

void CadastroDeRamais(CadRamal *pRamal, CadRamal *pVetor){

    system("clear");
    
    cout << "\n=================================================";
    cout << "\nCADASTRO DE RAMAIS DO MINISTERIO DO MEIO AMBIENTE";
    cout << "\n=================================================\n";

    int iAux = 0;

    do {
        cout << "\nInforme o numero do Ramal entre 1000 e 3000 = ";
        cin  >> iAux;
        
        if (iAux < 999 || iAux > 2999) {
           cout << "\nNumero do Ramal fora do intervalo 1000 ate 2999\n";
           sleep(1);
        }

        pVetor = pRamal;
        
        if (!VerificarExistenciaDoRegistro (pVetor, "", iAux, 0)) {
           cout << "\nNumero do Ramal ja esta cadastrado\n";
           sleep(1);
           iAux = -1;//fleguei
        }

        if (iAux != -1) {
           pRamal->iNumRamal = iAux;
        }
        
    } while (iAux < 999 || iAux > 2999);
    
    do {
        cout << "\nInforme o codigo da Categoria entre 0 e 6 = ";
        cin  >> pRamal->VarCategoria.iCodCategoria;
        cin.ignore();
        if (pRamal->VarCategoria.iCodCategoria < 0 || pRamal->VarCategoria.iCodCategoria > 6) {
           cout << "\nCodigo da Categoria fora do intervalo 0 ate 6\n";
           sleep(2);
        }
        
    } while (pRamal->VarCategoria.iCodCategoria < 0 || pRamal->VarCategoria.iCodCategoria > 6);
    
    cout << "\nInforme a descricao da Categoria = ";
    getline (cin, pRamal->VarCategoria.sNomeCategoria);
    
    for (auto &letra: pRamal->VarCategoria.sNomeCategoria) {
        letra = toupper(letra); 
    }
 
    do {
        cout << "\nInforme a descricao do Setor = ";
        getline (cin, pRamal->VarSetor.sSetor);

        if (pRamal->VarSetor.sSetor == " ") {
           cout << "\nDescricao do Setor deve ser preenchida\n";
           sleep(2);
        }
        
    } while (pRamal->VarSetor.sSetor == " ");
    
    for (auto &letra: pRamal->VarSetor.sSetor) {
        letra = toupper(letra); 
    }
 
    do {
        cout << "\nInforme o codigo do Edificio 500 ou 505 = ";
        cin  >> pRamal->VarEdificio.iCodEdificio;
        cin.ignore();
        
        if (pRamal->VarEdificio.iCodEdificio != 500 && pRamal->VarEdificio.iCodEdificio != 505) {
           cout << "\nCodigo do Edificio diferente de 500 ou 505\n";
           sleep(2);
        }
        
    } while (pRamal->VarEdificio.iCodEdificio != 500 && pRamal->VarEdificio.iCodEdificio != 505);
    
    cout << "\nInforme o Endereco do Edificio = ";
    getline (cin, pRamal->VarEdificio.sNomeEdificio);

    for (auto &letra: pRamal->VarEdificio.sNomeEdificio){
        letra = toupper(letra); 
    }

    do {
        cout << "\nInforme o numero do andar + o numero da sala = ";
        getline (cin, pRamal->sSalaRamal);

        if (pRamal->sSalaRamal == " ") {
           cout << "\nNumero do andar + o numero da sala deve ser preenchido\n";
           sleep(2);
        }
        
    } while (pRamal->sSalaRamal == " ");

    do {
        cout << "\nInforme o nome do Responsavel pelo Ramal = ";
        getline(cin, pRamal->sRespRamal);

        if (pRamal->sRespRamal == " ") {
           cout << "\nO nome do Responsavel pelo Ramal deve ser preenchido\n";
           sleep(2);
        }
        
    } while (pRamal->sRespRamal == " ");
    
    for (auto &letra: pRamal->sRespRamal) {
        letra = toupper(letra); 
    }

    do {
        cout << "\nInforme o nome do Responsavel pelo Ateste = ";
        getline (cin, pRamal->sRespAteste);

        if (pRamal->sRespAteste == " ") {
           cout << "\nO nome do Responsavel pelo Ateste deve ser preenchido\n";
           sleep(2);
        }
        
    } while (pRamal->sRespAteste == " ");
    
    for (auto &letra: pRamal->sRespAteste) {
        letra = toupper(letra); 
    }
 
    return;
}

bool VerificarExistenciaDoRegistro (CadRamal *pVetor, string pAuxiliar, int &pRamal, int pOpc) {
        
    if (pAuxiliar != "") {
        if (iQtdRegistros == 0) {
            cout << "\n=========================================================";                
            cout << "\n       NAO HA REGISTROS CADASTRADOS NO MOMENTO";
            cout << "\n=========================================================\n";
            pRamal = -1;
            sleep(4);
            return true;
        }

        for (auto &letra: pAuxiliar) {
            letra = toupper(letra);
        }
    }

    for (int i = 0; i < iTam; i++) { 
        if (pOpc == 0) {
            if (pVetor[i].iNumRamal == pRamal) {
               pRamal = i;
               return false; 
            } 

        } else if (pOpc == 1) {
            if (pVetor[i].VarSetor.sSetor == pAuxiliar) {
               pRamal = i;
               return false; 
            } 
            
        } else if (pOpc == 2) {
            if (pVetor[i].VarEdificio.iCodEdificio == pRamal) {
               pRamal = i;
               return false; 
            } 
            
        } else if (pOpc == 3) {
            if (pVetor[i].sRespRamal == pAuxiliar) {
               pRamal = i;
               return false; 
            } 
            
        } else if (pOpc == 4) {
            if (pVetor[i].sRespAteste == pAuxiliar) {
               pRamal = i;
               return false; 
            } 
        }
        
    }

    return true; 
}

void ListarCadastroParaPesquisa (CadRamal *pVetor, int &pOpc) { 
        
    if (iQtdRegistros == 0) {
        cout << "\n=========================================================";                
        cout << "\n       NAO HA REGISTROS NO CADASTRO NO MOMENTO";
        cout << "\n=========================================================\n";
        sleep(4);
        pOpc = -1;
        return;
    }
 
    if (pOpc == 0) {
        cout << "\n" << pVetor->iNumRamal;
        
    } else if (pOpc == 1) {
        cout << "\n" << pVetor->VarSetor.sSetor;
    
    } else if (pOpc == 2) {
        cout << "\n"  << pVetor->VarEdificio.iCodEdificio;
        cout << " - " << pVetor->VarEdificio.sNomeEdificio;
    
    } else if (pOpc == 3) {
        cout << "\n" << pVetor->sRespRamal;
    
    } else if (pOpc == 4) {
        cout << "\n" << pVetor->sRespAteste;
    
    }

    return;
}

void ImprimirCadastroDeRamais (CadRamal *pVetor) {

    cout << "\n=============================================================";
    cout << "\nRamal                  : " << pVetor->iNumRamal;
    cout << "\nCategoria              : " << pVetor->VarCategoria.iCodCategoria
         << " - ";
    cout << pVetor->VarCategoria.sNomeCategoria;
    cout << "\nSetor                  : " << pVetor->VarSetor.sSetor;
    cout << "\nEdificio               : " << pVetor->VarEdificio.iCodEdificio
         << " - ";
    cout << pVetor->VarEdificio.sNomeEdificio;
    cout << "\nSala                   : " << pVetor->sSalaRamal;
    cout << "\nResponsavel pelo Ramal : " << pVetor->sRespRamal;
    cout << "\nResponsavel pelo Ateste: " << pVetor->sRespAteste;
    cout << "\n=============================================================\n";
    sleep(2);

    return;
}