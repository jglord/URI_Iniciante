#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int segundo,aux;
    cin >> segundo;

    cout << segundo/3600 << ":";
    aux = segundo%3600;

    cout << aux/60 << ":";
    aux = aux%60;

    cout << aux << endl;

return 0;
}
