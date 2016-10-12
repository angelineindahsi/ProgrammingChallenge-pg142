#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    double propertyValue, assessmentValue, propertyTax, quarterPayment;
    
    cout << "Enter the acual value of the property: " << endl;
    cin >> propertyValue;
    
    assessmentValue = propertyValue * 0.6;
    propertyTax = ((assessmentValue - 5000) - 1000) * 2.64;
    quarterPayment = propertyTax / 4;
    
    cout << "The amount you need to pay: $" << propertyTax << endl;
    cout << "Your quarterly payment is $" << quarterPayment << endl;
    
    return 0;
}
