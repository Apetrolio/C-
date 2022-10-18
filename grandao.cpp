#include <iostream>
#include <fstream>
#include <iomanip>
#include <string.h>
#include <ctype.h>

using namespace std;

void console_clear_screen() { 
      #ifdef LINUX 
      system("clear||cls"); 
      #endif
    }
const int MAX = 5;

class Item {

   public:
         
         char descrip[20];
         float price;
         int quant;
         };

class allItems {
    
         Item inventory[MAX];
         static int numInInv;

    public:

        void saveToDisk(void);
        void readFromDisk(void);
        void addToInv(void);
        void prInv(void);

        allItems(void);
  };

void allItems::saveToDisk(void) 
{
  ofstream diskfile;
  diskfile.open("INVENT.DAT");
  diskfile.write((char *)this, sizeof(*this));
  }

void allItems::readFromDisk(void)
{
 ifstream diskfile;
 diskfile.open("INVENT.DAT");
 if(diskfile)
    { diskfile.read((char *)this, sizeof(*this));
     for (int ctr=0; ctr<MAX; ctr++)
         { if (inventory[ctr].descrip[0] ==  '\0' ) break; }  
        // numInInv = ctr;
     }
}

void allItems::addToInv(void)
{
   cout << "\nQUAL EH A DESCRIÇAO ?  ";
   cin.getline(inventory[numInInv].descrip, 20);  
   cout << " QUAL EH O PREÇO ==> ";
   cin >> inventory[numInInv].price;  
   
   cout << "\nQUAL EH A QUANTIDADE ?  ";
  
   cin >> inventory[numInInv].quant;  
   allItems::numInInv++;
     } 

void allItems::prInv(void)
{
   cout <<  setprecision(2) << setiosflags(ios::showpoint);   
   cout <<  setiosflags(ios::fixed); 
   if (numInInv == 0 )
      { cout << "\nO Arquivo estah vazio agora. \n ";}
      else
      { cout << "\nO estoque eh ==> \n:";
         for (int ctr=0; ctr< numInInv; ctr++)
         { cout << "\n Descriçao : " << inventory[ctr].descrip << "\n";
           cout << " Preço ==> em R$ " << inventory[ctr].price << "\n";
         }
        }
       } 

   allItems::allItems(void)
  {
    for (int ctr=0; ctr<MAX; ctr++)
        { inventory[ctr].descrip[0] = '\0'; }
  }

 int allItems::numInInv = 0;

//           agora vem MAIN

main()
{
   char answer;
   allItems inventory;
   
console_clear_screen();

cout << " \n O ESTOQUE ANTES DO ACRESCIMO DE ITENS : \n" ;
inventory.readFromDisk();
inventory.prInv();
do 
   {
     inventory.addToInv();
     cout << " EXISTE ALGUM ITEM PARA ENTRAR ? ( Y OU N)   ";
     cin >> answer;
     cin.ignore();
     } while (toupper(answer) != 'N');
      inventory.prInv();
      inventory.saveToDisk();
      return 0;
    }
  
    
 






