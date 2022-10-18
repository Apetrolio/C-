#include <iostream>
#include <string.h>
#include <limits>
#include <ctype.h>
#include <stdio.h>

using namespace std;

void console_clear_screen() { 
      #ifdef LINUX 
      system("clear||cls"); 
    //  system("tput reset");
      #endif
    }


 main() {
      
     console_clear_screen();

     const int MAX = 50;  
     char inputName[80];
     
     char * names[MAX];
     
     cout << " Aloca nomes na heap \n ";

     for (int num=0; num<MAX; num++) {
                                      cout << " entre com um NOME para sair digite SAIR ";
                                      cin.getline(inputName, 80);
                                      if (!strcmp(inputName,"SAIR"))
                                         {break;}
                                          // aloca com o ponteiro muito show
                                         names[num] = new char[strlen(inputName)+1];
                                          // faz uma copia na heap
                                         strcpy(names[num], inputName);
                                      //
                                        cout << "\n Os Nomes Sao ==> \n";
                                               for (int j=0; j<num; j++)
                                                   { cout << names[j] << "\n";}
                                              delete names[MAX];
                                       }
                                           return 0;
                             }
 
