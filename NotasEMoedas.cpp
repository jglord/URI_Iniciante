#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    float valor,aux,aux2;

    cin >> valor;
    cout << fixed << setprecision(2);

    cout << "NOTAS:" << endl;

    cout << floor(valor/100) << " nota(s) de R$ 100.00" << endl;

    aux = fmod(valor,100);
    cout << floor(aux/50) << " nota(s) de R$ 50.00" << endl;

    aux = fmod(aux,50);
    cout << floor(aux/20) << " nota(s) de R$ 20.00" << endl;

    aux = fmod(aux,20);
    cout << floor(aux/10) << " nota(s) de R$ 10.00" << endl;

    aux = fmod(aux,10);
    cout << floor(aux/5) << " nota(s) de R$ 5.00" << endl;

    aux = fmod(aux,5);
    cout << floor(aux/2) << " nota(s) de R$ 2.00" << endl;

    cout << "MOEDAS:" << endl;

    aux = aux*100;
    aux2 = (int) aux;

    aux = fmod(aux2,100);
    cout << ceil(aux) << " moeda(s) de R$ 1.00" << endl;

    aux = fmod(aux,100);
    cout << aux/50 << " moeda(s) de R$ 0.50" << endl;

    aux = fmod(aux,50);
    cout << aux/25 << " moeda(s) de R$ 0.25" << endl;

    aux = fmod(aux,25);
    cout << aux/10 << " moeda(s) de R$ 0.10" << endl;

    aux = fmod(aux,10);
    cout << aux/5 << " moeda(s) de R$ 0.05" << endl;

    aux = fmod(aux,5);
    cout << aux << " moeda(s) de R$ 0.01" << endl;






return 0;
}