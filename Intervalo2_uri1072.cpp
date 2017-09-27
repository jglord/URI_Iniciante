#include <iostream>
using namespace std;

int main(){
int  x,y;
int in = 0,out = 0;

cin >> y;

for(int i = 1 ;i <= y;i++){
  cin >> x;
   if (x >= 10 && x <= 20)
     in++;
      else
       out++;
}
cout << in << " in" << endl;
cout << out << " out" << endl;
return 0;
}
