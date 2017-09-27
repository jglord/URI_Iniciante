#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
   float valor,aux;

   cin >> valor;

   cout << "NOTAS:" << endl;

   cout << floor(valor/100) << " nota(s) de R$ 100.00" << endl;

   aux = fmod(valor,100);
   cout << floor(aux/50) " nota(s) de R$ 50.00" << endl;





return 0;
}
