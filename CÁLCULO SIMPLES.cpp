#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  int p1,np1,p2,np2;
  float vp1,vp2,vfinal;

  cin >> p1 >> np1 >> vp1 >> p2 >> np2 >> vp2;
  cout << fixed << setprecision(2);


  vfinal = np1*vp1+np2*vp2;

  cout << "VALOR A PAGAR: R$ " << np1*vp1 + np2*vp2 <<endl;
  cout << fixed << setprecision(2);

return 0;
}
