#include <iostream>

using namespace std;

class propaganda{

   private:

   public:
        void inscrever(){
        cout << "Vamos ver eh show\n"; 
                        }
        void curta(){
              cout << "Apenas  este professor eh bom\n" ;  
                   }
};
int main(){
    propaganda andre;
    andre.inscrever();
    andre.curta();
    return 0;
}
