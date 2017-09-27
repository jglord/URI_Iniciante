#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int dias,aux;

    cin >> dias;

    cout << dias/365 << " ano(s)" << endl;
    aux = dias%365;

    cout << aux/30 << " mes(es)" << endl;
    aux = aux%30;

    cout << aux << " dia(s)" << endl;

return 0;
}
