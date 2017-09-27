#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  int a,b,tempo,aux;

  cin >> a >> b;

  if(a >= b){
    aux = (b - a)+24;
  }
  else
    aux = (a - b)+24;

    cout << "O JOGO DUROU " << aux << " HORA(S)";




return 0;
}
