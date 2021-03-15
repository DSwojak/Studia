#include <iostream>
#include "math.h"
using namespace std;

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
    
        return 0;
}    
