#include <iostream>
#include <iomanip>
using namespace std;

int main(){
double A,B,C;
float a_triangulo,a_circulo,a_trapezio,a_quadrado,a_retangulo;

cin >> A >> B >> C;
cout << fixed << setprecision(3);

a_triangulo = A*C/2;
a_circulo = 3.14159*C*C;
a_trapezio = (A+B)*C/2;
a_quadrado = B*B;
a_retangulo = A*B;


cout << "TRIANGULO: " << a_triangulo << endl;
cout << "CIRCULO: " << a_circulo << endl;
cout << "TRAPEZIO: " << a_trapezio << endl;
cout << "QUADRADO: " << a_quadrado << endl;
cout << "RETANGULO: " << a_retangulo << endl;
cout << fixed << setprecision(3);




return 0;
}
