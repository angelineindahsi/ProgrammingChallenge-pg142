#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    int celcius, farenheit;
    
    cout << "Enter the number (in Celcius): " << endl;
    cin >> celcius;
    
    farenheit = 9 / 5 * celcius + 32;
    cout << "The result is " << farenheit << " F" << endl;
    
    return 0;
}
