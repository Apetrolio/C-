#include <iostream>

using namespace std;


class carro{

    private:
//

     int ano;
     float valor, km;

    public:
// ===================CONSTRUTORA

                   carro(int a, float v=-1, float k=-1) {
                         ano = a;
                         valor = v;
                         km   = k;
                                                        }

// =========================  ANO
         void setano(int a){
                     //this->ano = ano;
//
         int ano;
         ano = a;
         int * p_ano;
         ano = 2011;
//                   ano = a;
         p_ano = &ano;
                           }

         int getano(){
             return ano;
                     }

//  ============= VALOR
         void setvalor(float v){
//
         float valor;
         valor = v;
         float * p_valor;
         valor = 100.000;
         p_valor = &valor;
                     //this->valor = valor;
                           }
         float getvalor(){
             return valor;
                     }
// ==============================KM
         void setkm(float k){
               //       km = k;
//
         float km;
         km = k;
         float * p_km;
         km = 200.000;
         p_km = &km;
                     //this->km = km;
                           }
         float getkm(){
             return km;
                     }
};
       int main() {

             carro palio(95000,100.000,1900.000);
         //     carro palio;
         //     palio.setano(*p_ano);
         //     palio.setvalor(100.000);
         //     palio.setkm(150000.000);
             cout << " Ano do Palio veio eh ==>\n" ;
             cout << " ANO PALIO" << palio.getano() << endl;
             cout << " KM PALIO" << palio.getkm() << endl;
             cout << " VALOR PALIO" << palio.getvalor() << endl;


             carro corolao(2011,3.0000000,250.0000);
          //     carro corolao;
          //     corolao.setano(2011);
          //     corolao.setvalor(200.000);
           //    corolao.setkm(190000.000);
             cout << " Ano do Corolao novo eh ==>\n" ;
             cout << " ANO COROLAO" << corolao.getano() << endl;
             cout << " KM COROLAO" << corolao.getkm() << endl;
             cout << " VALOR COROLAO" << corolao.getvalor() << endl;
             
        return 0;
}

