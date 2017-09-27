#include <iostream>
using namespace std;

int main(){
int  x,y;
int in = 0,out = 0;

cin >> y;

for(int i = 1 ;i <= y;i++){
  cin >> x;
  if(x%2 == 0 && x > 0){
    cout << "EVEN POSITIVE" << endl;
  }
   if(x < 0 && x%2 != 0)
   cout << "ODD NEGATIVE" << endl;
  if(x%2 != 0 && x > 0){
    cout << "ODD POSITIVE" << endl;
  }
  if(x < 0 && x%2 == 0)
    cout << "EVEN NEGATIVE" << endl;
  if(x == 0){
    cout << "NULL" << endl;
  }
}
  return 0;
  }
