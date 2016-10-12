#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    string month;
    int year;
    double collectedAmount;
    double sales, stateTax, countyTax, totalTax;
    
    cout << "Enter month: " << endl;
    cin >> month;
    
    cout << "Enter year: " << endl;
    cin >> year;
    
    cout << "Total amount collected at the cash register: $" << endl;
    cin >> collectedAmount;
    
    sales = collectedAmount / 1.06;
    
    stateTax = sales * 0.04;
    countyTax = sales * 0.02;
    totalTax = stateTax + countyTax;
    
    cout << "Month: " << month << endl;
    cout << "--------------------------------------\n" << endl;
    cout << "Total collected:" << setw(10) << "$" << collectedAmount << endl;
    cout << "Sales:" << setw(20) << "$" << sales << endl;
    cout << "County Sales Tax:" << setw(9) << "$" << countyTax << endl;
    cout << "State Sales Tax:" << setw(10) << "$" << stateTax << endl;
    cout << "Total Sales Tax:" << setw(10) << "$" << totalTax << endl;
    
    return 0;

}
