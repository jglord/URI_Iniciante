#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double A,B,C;
	float MEDIA;
	
	cin >> A;
	cin >> B;
	cin >> C;
	
	MEDIA = (A*2+B*3+C*5)/(10);
	
	cout << fixed << setprecision(1);
	cout << "MEDIA = " << MEDIA << endl;

return 0; 
}
