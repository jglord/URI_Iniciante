#include <iostream>
using namespace std;

int main(){
int senha;

do {
  cin >> senha;
   if(senha != 2002){
     cout << "Senha invalida"<< endl;
   }

} while(senha != 2002);
cout << "Acesso Permitido" << endl;


  return 0;
}
