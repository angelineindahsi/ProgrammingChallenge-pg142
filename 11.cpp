//Write a program that asks the user to enter the monthly costs for the following expenses incurred from operating his or her automobile: loan payment, insurance, gas, oil, tires, and maintenance. The program should then display the total monthly cost of these expenses, and the total annual cost of these expenses.
#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    int loanPayment, insurance, gas, oil, tires, maintenace, monthlyCost, annualCost;
    
    cout << "Enter your monthly loan: " << endl;
    cin >> loanPayment;
    
    cout << "Enter your monthly insurance: " << endl;
    cin >> insurance;
    
    cout << "Enter your monthly gas expenses " << endl;
    cin >> gas;
    
    cout << "Enter your monthly oil expenses: " << endl;
    cin >> oil;
    
    cout << "Enter your monthly tire expenses: " << endl;
    cin >> tires;
    
    cout << "Enter your monthly maintenance expenses " << endl;
    cin >> maintenace;
    
    monthlyCost = loanPayment + insurance + gas + oil + tires + maintenace;
    annualCost = monthlyCost * 12;
    
    cout << "The total montly cost is: $" << monthlyCost << endl;
    cout << "The total annual cost is: $" << annualCost << endl;
    
    return 0;
}
