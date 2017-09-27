#include <iostream>
using namespace std;

int main(){
	int a,b,c,d;

    d = 0;

	cin >> a >> b >> c;

	if(a > b)
	     d = a;
	else
	     d = b;
	if(d > c)
	    d = d;
	else
	    d = c;

	cout << d << " eh o maior" << endl;



return 0;
}
