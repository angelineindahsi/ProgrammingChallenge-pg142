#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    int gallonOfGas, numberOfMiles, average;
    
    cout << "Enter the number of the size of the tank (In gallons) " << endl;
    cin >> gallonOfGas;
    
    cout << "Enter the number of miles: " << endl;
    cin >> numberOfMiles;
    
    average = numberOfMiles / gallonOfGas;
    cout << "The number of miles that may be driven per gallon of gas is " << average << endl;
    
    return 0;
}
