#include <stdlib.h>
#include <iomanip>
#include <limits>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <fstream>

using namespace std;

    void console_clear_screen() {
      #ifdef LINUX
      system("clear||cls");
    //  system("tput reset");
      #endif
    }

const int MAX = 100;
const char ANDRE = 50;
class tudo {

     public:
             char  descreve[30];
             float price;
             int quantidade;
             
           };


class robo {

       private:
          int ano, meses;
          float valor;
    tudo todositens[MAX];     //
      int numInInv = 0;

       public:

    void init(void);
    void savetoDisk(void);
    void readFromDisk(void);
    void incluidados(void);
    void prInnv(void);

};

//// implementa a func

void robo::init(void)
{
  ano = 2022;
  meses = 9;
  valor = 100.00;
  char * nome[ANDRE];
  for ( int cta=0;cta=ANDRE;cta++)
      { cout << "Colocando o ponteiro char " << ANDRE << endl; 
        }

}

void robo::savetoDisk(void)
{
   ofstream diskFile;
   diskFile.open("ARQUIVO.DAT");
   diskFile.write((char *)this , sizeof(*this));
   //return 0;
 }

void robo::readFromDisk(void)
{
 ifstream diskFile;
 diskFile.open("ARQUIVO.DAT");
 if(diskFile)
            {
             diskFile.read((char *)this, sizeof(*this));
             for (int ctr=0;ctr<MAX; ctr++)
            { if (todositens[ctr].descreve[0] == '\0') break;}
             cout << "Mostrando  o ue tem no disco" << todositens[MAX].descreve << endl;
            //  numInInv =  ctr;
            }
}

void robo::incluidados()
{
        cout << "\nENTRE COM ALGUNS DADOS PARA GRAVAR NO DISCO : \n";
        cin.getline(todositens[numInInv].descreve,30);
        cout << "QUAL EH O VALOR \n";
        cin >> todositens[numInInv].price;
        cout << "QUAL A QUANTIDADE \n";
        cin >> todositens[numInInv].quantidade;
        robo::numInInv++;
        
}

void robo::prInnv(void)
{
        try 
        { 
                throw " Agora saiu por try";
                
        cout << setprecision(2) << setiosflags(ios::showpoint);
        cout << setiosflags(ios::fixed);
        if (numInInv == 0)
           { 
              cout << "\n O Estoque esta vazio agora \n";
              robo::incluidados();
                   }
        else 
            {
              cout << "\n Voce tem isto no estoque ==>\n";
                robo::readFromDisk();
                for (int ctr=0;ctr<numInInv;ctr++)  
                 { cout << "\n Descriçao : " << todositens[ctr].descreve << "\n";
                   cout << "Coloque agora o Preço  R$ " << todositens[ctr].price << "\n";  
                   cout << "Coloque a Quantidade" << todositens[ctr].quantidade << "\n";  
                   }
            }
        }
            catch (char *)
            {
                 cout << "saido do catch secundario" ;
            } 
       
  //return 0;
}           

main()

{
   try {      
  robo carro;
  char ans;
    do
    {
        
        cout << "\nA - Salvando no Disco";
        cout << "\nB - Lendo do Disco  ";
        cout << "\nC - Incluir os dados";
        cout << "\nD - Amarelo";
        cout << "\nE - Vermelho";
        cout << "\nF - Laranja";
        cout << "\nG - Bege";
        cout << "\nH - Roxo";
        cout << "\nI - Grena";
        cout << "\n\nEscolha uma cor ou S para sair ";
//        cin.ignore(120, '\n');
        cin >> ans;

        switch (ans)
        {
            case 'A' :

                    console_clear_screen();
                    cout << "\nSalvando no Disco ...\n";
                    carro.savetoDisk();
                    break;

            case 'B' :

                    console_clear_screen();
                    cout << "\nVoce escolheu Lendo....\n";
                    carro.readFromDisk();
                    break;

            case 'C' :

                    console_clear_screen();
                    cout << "\nVoce escolheu Incluir Dados.\n";
                    carro.incluidados();
                    break;

            case 'D' :

                    console_clear_screen();
                    cout << "\nVoce escolheu Imprimir na Tela.\n";
                    carro.prInnv();
                    break;

            case 'E' :

                    console_clear_screen();
                    cout << "\nVoce escolheu Orange.\n";
                    break;

            case 'F' : exit(1);

            case 'G' : exit(1);

            case 'H' :

                    console_clear_screen();
                    cout << "\nVoce escolheu uma cor exotica.\n";
                    break;

            case 'Q' :

                    console_clear_screen();
                    cout << "\nVoce escolheu sair. ";
                            "Tchau!\n";
                    break;

            }

        } while (toupper(ans) != 'Q');

   }
    catch (char *)
                  {
                       cout << "vendo a respostas sdo try/catch"; 
                  }

        return 0;
    }



