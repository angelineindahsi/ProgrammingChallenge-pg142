//Many financial experts advise that property owners should insure their homes or buildings for at least 80 percent of the amount it would cost to replace the structure. Write a program that asks the user to enter the replacement cost of a building and then displays the minimum amount of insurance he or she should buy for the property.
#include <iostream>
using namespace std;

int main () {
    double replacementCost, minimumAmount;
    
    cout << "Enter the replacement cost of the building " << endl;
    cin >> replacementCost;
    
    minimumAmount = replacementCost * 0.8;
    
    cout << "The minimum amount of insurance you should buy is: $" << minimumAmount << endl;
    
    return 0;
}
