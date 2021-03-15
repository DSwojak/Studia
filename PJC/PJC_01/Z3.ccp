#include <iostream>
#include "math.h"
using namespace std;
      
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
          return 0;
}
