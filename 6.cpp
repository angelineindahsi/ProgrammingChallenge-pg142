#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    double cookieAmount, wantedSugar, wantedButter, wantedFlour, oneSugar, oneButter, oneFlour;
    
    cout << "Please enter the number of cookies you want to make: " << endl;
    cin >> cookieAmount;
    
    oneSugar = 1.5 / 48;
    oneButter = 1 / 48;
    oneFlour = 2.75 / 48;
    
    
    wantedSugar = static_cast<float>(oneSugar) * cookieAmount;
    wantedButter = static_cast<float>(oneButter) * cookieAmount;
    wantedFlour = static_cast<float>(oneFlour) * cookieAmount;
    
    cout << "The number of sugar needed is " << wantedSugar << " cups" << endl;
    cout << "The number of butter needed is " << wantedButter << " cups" << endl;
    cout << "The number of flour needed is " << wantedFlour << " cups" << endl;
    
    return 0;
}
