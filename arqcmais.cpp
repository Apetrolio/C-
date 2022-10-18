#include <stdlib.h>
#include <limits>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <iostream>


using namespace std;

ostream & som(ostream & out);

    void console_clear_screen() { 
      #ifdef LINUX 
      system("clear||cls"); 
    //  system("tput reset");
      #endif
    }

class robo {

       private:
          int ano, meses;
          float valor;
          
       public:

    void init(void);

};

//// implementa a func

void robo::init(void)
{
  ano = 2022;
  meses = 9;
  valor = 100.00;
}
  
main()
{
  robo carro;
  char ans;
  console_clear_screen();
  carro.init();
  do
    {

        cout << "\n0 - Sair";
        cout << "\n1 - Verde ";
        cout << "\n2 - Azul";
        cout << "\n3 - Amarelo";
        cout << "\n4 - Vermelho";
        cout << "\n5 - Laranja";
        cout << "\n6 - Bege";
        cout << "\n7 - Roxo";
        cout << "\n8 - Grena";
        cout << "\n\nEscolha uma cor ou S para sair ";  

        cin >> ans;

        switch (ans)
        {
            case 'A' :
                    console_clear_screen();  
                    cout << "\nVoce escolheu Green.\n";
                    break;
            case 'B' :
                    console_clear_screen();
                    cout << "\nVoce escolheu Blue.\n" << som ;
                    break;
            case 'C' :
                    console_clear_screen();
                    cout << "\nVoce escolheu Yellow.\n";
                    break;
            case 'D' :
                    console_clear_screen();
                    cout << "\nVoce escolheu Red.\n";
                    break;
            case 'E' :
                    console_clear_screen();
                    cout << "\nVoce escolheu Orange.\n";
                    break;
            case 'F' : exit(1);
            case 'G' : exit(1);
            case 'H' : console_clear_screen();
                    cout << "\nVoce escolheu uma cor exotica.\n";
                    break;

            case 'S' :
                    console_clear_screen();
                    cout << "\nVoce escolheu sair. ";
                            "Tchau!\n";
                    break;

            }   
        } while (toupper(ans) != 'S');
        return 0;
}
            ostream & som(ostream & out)
                {
                  cout << '\x07';
                  return out;
                }
  


