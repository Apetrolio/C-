#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <ctype.h>

using namespace std;

void console_clear_screen() { 
      #ifdef LINUX 
      system("clear||cls"); 
      #endif
    }

class dizimo{ 

private:
       float taxRate=.10;
       float salario,xsalario;
public:

       float taxafixa(float taxRate);
       
}

main(float salario,float xsalario)
{
     
      console_clear_screen();  
      dizimo oferta,ganho; 
      oferta.taxafixa();
      ganho.taxafixa();
      return 0;
}
  
     dizimo::taxafixa(this)
        {
         cout << setprecision(2) << setiosflags(ios::fixed);
         cout << "Total dos Dizimos eh ==> " << oferta << "\n\n";
         float salario;
         cin >> salario;
         return ( salario + (salario * taxRate));
          }

    dizimo::ganho(this)
       {
         cout << setprecision(2) << setiosflags(ios::fixed);
         cout << "Total dos Dizimos eh ==> " << ganho << "\n\n";
         float xsalario;
         cin >> xsalario;   
         return ( xsalario + (xsalario * taxRate));
       }

