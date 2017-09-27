#include <iostream>
using namespace std;

int main(){
  float a,b,c,d,e,f;
  int g = 0;

  cin >> a;
  cin >> b;
  cin >> c;
  cin >> d;
  cin >> e;
  cin >> f;

  if(a == 0) g++;
  if(b == 0) g++;
  if(c == 0) g++;
  if(d == 0) g++;
  if(e == 0) g++;
  if(f == 0) g++;

  cout << g << " valores positivos";



return 0;
}
