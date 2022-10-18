#include <iostream>

using namespace std;

int main () {

    int var1;
    //int vet[10];
       // vet[0] = 10;
       // vet[1] = 20;
       // vet[2] = 30;
       // vet[3] = 40; 
         
       int vet[6] = { 60,3,467,45,374,15};
    int* point1;
    var1=1000;
    point1=&var1;
    int * vetor;
    *vetor = vet[7];

    cout << " aprendendo" << var1 << &var1 << *point1 << point1 << endl;

    cout << "testando os vetores" <<  vet[6] << endl;

    return 0;

}
//return 0;