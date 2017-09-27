#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  int quant;
  float valor,cod,a,b,c,d,e;

  a = 4;
  b = 4.50;
  c = 5;
  d = 2;
  e = 1.50;

  cin >> cod >> quant;
  cout << fixed << setprecision(2);

  if(cod == 1)
  {
   cod = a;
  }

  else
  if(cod == 2)
  {
   cod = b;
  }

  else
  if(cod == 3)
  {
  cod = c;
  }

  else
  if(cod == 4)
  {
  cod = d;
  }

  else
  if(cod == 5)
  {
  cod = e;
  }

  valor = quant * cod;

  cout << "Total: R$ " << valor << endl;
  cout << fixed << setprecision(2);







return 0;
}
