#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	string nome;
	double sal_final,salario,comissao;
	
	cin >> nome;
	cin >> salario;
	cin >> comissao;
	cout << fixed << setprecision(2);
	sal_final = salario+comissao*15/100;
	
	cout << "TOTAL = R$ " << sal_final;
	cout << fixed << setprecision(2);
	

return 0; 
}
