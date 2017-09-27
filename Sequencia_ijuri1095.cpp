#include <iostream>
using namespace std;

int main(){
  int i,j;
  j = 60;
  i = 1;
  cout << "I=1 J=60" << endl;

  do{
    i+= (3);
    j-= (5);
    cout << "I=" << i << " " <<"J=" << j << endl;
}

while(j != 0);

return 0;
}
