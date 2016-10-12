#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    double cookies, totalOfCalories;
    int oneCookie = 75;
    
    cout << "Enter the number of cookies you ate: " << endl;
    cin >> cookies;
    
    totalOfCalories = cookies * oneCookie;
    
    cout << "The total number of cookies you consumed is " << totalOfCalories << " calories" << endl;
    
    return 0;
}
