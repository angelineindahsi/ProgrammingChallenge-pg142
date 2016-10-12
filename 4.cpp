#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    string month1, month2, month3;
    int rain1, rain2, rain3, total, average;
    
    cout << "Enter a month" << endl;
    cin >> month1;
    
    cout << "Enter a month: " << endl;
    cin >> month2;
    
    cout << "Enter a month: " << endl;
    cin >> month3;
    
    cout << "Enter the amount of rain for the 1st month: " << endl;
    cin >> rain1;
    
    cout << "Enter the amount of rain for the 2nd month: " << endl;
    cin >> rain2;
    
    cout << "Enter the amount of rain for the 3rd month: " << endl;
    cin >> rain3;
    
    total = rain1 + rain2 + rain3;
    average = total / 3;
    cout << "The average rainfall for " << month1 << ", " << month2 << ", " << "and " << month3 << " " << "is " << average << endl;
    
    return 0;
}
