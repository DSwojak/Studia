#include <iostream>
#include "math.h"
using namespace std;

 cout << "Proszę podać parametry a, b i c" << endl;
    double a, b, c;
    cin >> a >> b >> c;
    double delta=(b*b)-(4*a*c);

    if(delta<0){
        cout<<"Miejsca zerowe w dziedzinie licz urojonych";
    } else if(delta == 0){
        if(a!=0) {
            double x = (-b / (2 * a));
            cout << "Miejsce zerowe w dziedzinie " << x;
        }
    } else {
        if(a!=0){
            double x1=(-b-sqrt(delta))/(2*a);
            double x2=(-b+sqrt(delta))/(2*a);

            cout<<"Miejsca zerowe w dziedzinie "<< x1 <<" i "<< x2;
        }
    }
    
  return 0;
}
