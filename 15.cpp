#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    double propertyValue, propertyTax, assessmentValue;
    
    cout << "Enter the property's actual value: " << endl;
    cin >> propertyValue;
    
    assessmentValue = propertyValue * 0.6;
    propertyTax = assessmentValue / 100 * 0.75;
    
    cout << "The assessment value is " << assessmentValue << endl;
    cout << "The property tax is " << propertyTax << endl;
    
    return 0;
}
