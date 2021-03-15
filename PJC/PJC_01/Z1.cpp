#include <iostream>
using namespace std;

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

    return 0;
}
