#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	float t,vmedia,gasto;

	cin >> t;
	cin >> vmedia;
	cout << fixed << setprecision(3);

	gasto = (t*vmedia)/12;

	cout << gasto << endl;
	cout << fixed << setprecision(3);

return 0;
}
