#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  double n1,n2,n3,n4,rec,media,mediarec;

  cin >> n1 >> n2 >> n3 >> n4;
  cout << fixed << setprecision(1);

  media = (n1*2+n2*3+n3*4+n4*1)/(1+2+3+4);
  cout << fixed << setprecision(1);

  if(media >= 7){
    cout << "Media: " << media << endl;
    cout << fixed << setprecision(1);
    cout << "Aluno aprovado." << endl;
  }

  else if(media < 5){
    cout << "Media: " << media << endl;
    cout << fixed << setprecision(1);
    cout << "Aluno reprovado." << endl;
  }
  if (media > 5 && media < 6.9){
  cin >> rec;
  cout << fixed << setprecision(1);
  mediarec = (rec+media)/(2);
  cout << fixed << setprecision(1);
}

  if( mediarec > 5){

  cout << "Media : " << media << endl;
  cout << fixed << setprecision(1);
  cout << "Aluno em exame." << endl;
  cout << "Nota do exame: " << rec << endl;
  cout << "Aluno aprovado." << endl;
  cout << "Media final : " << mediarec << endl;
  cout << fixed << setprecision(1);
}
  else
  if ( mediarec < 4.9) {
    cout << "Media : " << media << endl;
    cout << fixed << setprecision(1);
    cout << "Aluno em exame." << endl;
    cout << "Nota do exame: " << rec << endl;
    cout << "Aluno reprovado." << endl;
    cout << "Media final : " << mediarec << endl;
    cout << fixed << setprecision(1);
  }





return 0;
}
