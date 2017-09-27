#include <iostream>
using namespace std;

int main(){
  string subfilo,classe,alimento,especie;

  cin >> subfilo;
  cin >> classe;
  cin >> alimento;

  if(subfilo == "vertebrado" && classe == "ave" && alimento == "carnivoro"){
    cout << "aguia" << endl;
  }
  else if(subfilo == "vertebrado" && classe == "ave" && alimento == "onivoro"){
    cout << "pomba" << endl;
  }
  else if(subfilo == "vertebrado" && classe == "mamifero" && alimento == "onivoro"){
    cout << "homem" << endl;
  }
  else if(subfilo == "vertebrado" && classe == "mamifero" && alimento == "herbivoro"){
    cout << "vaca" << endl;
  }
  else if(subfilo == "invertebrado" && classe == "inseto" && alimento == "hematofago"){
    cout << "pulga" << endl;
  }
  else if(subfilo == "invertebrado" && classe == "inseto" && alimento == "herbivoro"){
    cout << "lagarta" << endl;
  }
  else if(subfilo == "invertebrado" && classe == "anelideo" && alimento == "hematofago"){
    cout << "sanguessuga" << endl;
  }
  else if(subfilo == "invertebrado" && classe == "anelideo" && alimento == "onivoro"){
    cout << "minhoca" << endl;
  }




return 0;
}
