#include <iostream>
using namespace std;

int main(){
int a,b,c,d,f;
int pos = 0,neg = 0,par = 0,impar =0;

cin >> a;
 if(a%2 == 0){
   par++;
 }
 else
   impar++;
 if (a < 0){
   neg++;

 }else if (a > 0){
   pos++;
 }

 cin >> b;
  if(b%2 == 0){
    par++;
  }
  else
    impar++;
  if (b < 0){
    neg++;

  }else if (b > 0){
    pos++;
  }

  cin >> c;
   if(c%2 == 0){
     par++;
   }
   else
     impar++;
   if (c < 0){
     neg++;

   }else if (c > 0){
     pos++;
   }

   cin >> d;
    if(d%2 == 0){
      par++;
    }
    else
      impar++;
    if (d < 0){
      neg++;

    }else if (d > 0){
      pos++;
    }

    cin >> f;
     if(f%2 == 0){
       par++;
     }
     else
       impar++;
     if (f < 0){
       neg++;

     }else if (f > 0){
       pos++;
     }

     cout << par << " valor(es) par(es)" << endl;
     cout << impar << " valor(es) impar(es)" << endl;
     cout << pos << " valor(es) positivo(s)" << endl;
     cout << neg << " valor(es) negativo(s)" << endl;


  return 0;
}
