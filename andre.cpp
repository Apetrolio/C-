#include <iostream>

using namespace std;

void texto();
void tr(string tra[10]);
void soma(int a, int b);
int soma2(int a, int b);
int * ptr;

int main() {
   string transporte[10]={"Andre","luiz","Petrolio1","Carlos","Cesar","Marcos","Aurelio","Petrolio3","Jandira","Petrolio"};
   int res;
    soma(100,35);
    res=soma2(500,500);
    cout << "Total" << res << "\n";
    tr(transporte);

    return 0;
}
void texto(){

cout << " Fica assim :";
}

int soma2(int a, int b){

 cout << " Somando"  << a+b << "\n";
    return a+b;
 }

 void soma( int a, int b){
      cout << " Vamos";
  }

void tr(string tra[10]){

for (int i=0;1<11;i++)
     {
      cout << "transporte " << tra[i];
         }
}

