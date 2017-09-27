#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int n;
	float a,b,c;
	cout << fixed << setprecision(1);
	cin >> n;
	
	for(int i = 1;i <= n;i++){
		cin >> a;
		cin >> b;
		cin >> c;		
		
		cout << (a*2+b*3+c*5)/10 << endl;
	}
	
	
	
	
	return 0;
}
