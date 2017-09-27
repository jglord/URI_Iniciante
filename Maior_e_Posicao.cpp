#include <iostream>
using namespace std;

int main(){
  int n,aux,posi;

  for(int i=1;i <= 100;i++){
      cin >> n;
      if(n > aux){
           aux = n;
           posi = i;
       }

  }
  cout << aux << endl;
  cout << posi << endl;

  return 0;
}
