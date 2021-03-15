#include <iostream>
#include "math.h"
using namespace std;

//#define Z1
//#define Z2
//#define Z3
#define Z4

int main() {

//#ifndef NAZWA
#ifdef NAZWA
    cout << "Hello, World!" << endl;
    int a;
    double b;
    cin >> a >> b;
    cout << a << "tekst";
#endif

#ifdef Z1

    cout << "Proszę podać wzrost w metrach: " << endl;
    double wzrost;
    cin >> wzrost;
    cout << "Proszę podać wagę: " << endl;
    double waga;
    cin >> waga;

    double BMI;
    BMI = waga/(wzrost*wzrost);
    cout << "Wzrost wynosi: " << wzrost <<"m"<< endl;
    cout << "Waga wynosi: " << waga <<"kg"<< endl;
    cout << "BMI wynosi: " << BMI << endl;

#endif

#ifdef Z2

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

#endif

#ifdef Z3

    cout<<"Wprowadź trzy nieujemne liczby: ";
    unsigned int x, y, z, max; //wartości nie ujemne
    cin >> x >> y >> z;

    if(x>=y && x>=z)max=x;
    else if(y>=x && y>=z)max=y;
    else max=z;

    for(int i=max; i>0; i--){
        if(i>z)cout<<" ";
        else cout<<"*";
        if(i>y)cout<<" ";
        else cout<<"*";
        if(i>x)cout<<" ";
        else cout<<"*";
        cout<<endl;
    }

#endif

#ifdef Z4

    #define POL

    #ifdef POL
    #ifndef ENG

    int val=0, maxval=0, sum=0, maxsum=0;
    cout<<"POL";

   do{
       cin>>val;

       int tmp=val;
       while(tmp!=0) {
           sum += tmp % 10;
           tmp /= 10;
       }

       if(maxsum<sum){
           maxsum=sum;
           maxval=val;
       }
       sum=0;
   }while(val !=0);

    #endif
    #endif

    #ifdef ENG
    #ifndef POL

    int val=0, maxval=0, sum=0, maxsum=0;
    cout<<"ENG";

    do{
        cin>>val;

        int tmp=val;
        while(tmp!=0) {
            sum += tmp % 10;
            tmp /= 10;
        }

        if(maxsum<sum){
            maxsum=sum;
            maxval=val;
        }
        sum=0;
    }while(val !=0);

    #endif
    #endif

#endif

    return 0;
}
