#include <iostream>
#include <stdlib.h>
using  namespace std;
void console_clear_screen() { 
      #ifdef LINUX 
      system("clear||cls"); 
      #endif 
}

void pa_valores(int * passponteiro, int poref);

main()
{
      console_clear_screen();
      int passponteiro = 50;
      int poref = 100;

      cout << "Pra começar \n";
      cout << "Passponteiro eh ===> "  << passponteiro << "\n";
      cout << "Poref eh =========> "  << poref << "\n";

      pa_valores(&passponteiro, poref);
           cout << "Depois de chamar pa_valores :\n";
           cout << "passponteiro eh ====> " << passponteiro << "\n";
           cout << "poref eh ===========> " <<  poref << "\n";
           return 0;
}

     void pa_valores(int * passponteiro, int poref);
{
         *passponteiro = 1000;
          poref        =  500;
          cout << " Mudei o valor \n";
          cout << "passponteiro eh ====> " << *passponteiro << "\n";
          cout << "poref eh ===========> " << poref << "\n";
          return;
}

