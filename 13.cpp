#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    int dollar, yen, euros;
    
    cout << "Please enter the amount of money you want to convert (In dollars): " << endl;
    cin >> dollar;
    
    yen = dollar * 98.93;
    euros = dollar * 0.74;
    
    cout << "In yen it is " << yen << endl;
    cout << "In Euros it is " << euros << endl;
    
    double total;
    cin >> total;
    cout << fixed << setprecision(2) << yen << total;
    cout << fixed << setprecision(2) << euros << total;
    
    return 0;
}
