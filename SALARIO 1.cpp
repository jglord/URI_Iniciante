#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int num,hr_trab;
	float salary,hr_valor;
	
	cin >> num;
	cin >> hr_trab;
	cin >> hr_valor;
	cout << fixed << setprecision(2);
	
	salary = hr_valor*hr_trab;
	
	cout << "NUMBER = " << num << endl;
	
	cout << "SALARY = U$ " << salary << endl; 
	cout << fixed << setprecision(2);
	
	
	
	
return 0; 
}
