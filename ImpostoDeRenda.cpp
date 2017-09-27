#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  double x;

  cin >> x;
  cout << fixed << setprecision(2);

  if(x > 0 && x <= 2000){
    cout << "Isento" << endl;
  }
  else if(x >= 2000.01 && x <= 3000){
    x = (x - 2000)*0.08;

    cout << "R$ " << x << endl;
  }
  else if(x >= 3000.01 && x <= 4500){
   x = (x - 3000)*0.18 + (1000 * 0.08);

   cout << "R$ " << x << endl;
  }
  else if(x > 4500){
   x = (x - 4500)*0.28 + (1500 * 0.18) + (1000 * 0.08);

   cout << "R$ " << x << endl;

  }




return 0;
}
