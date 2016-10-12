#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    double classA = 15;
    double classB = 12;
    double classC = 9;
    double a, b, c, ticketSoldA, ticketSoldB, ticketSoldC, total;
    
    cout << "How many tickets were sold for class A? $" << endl;
    cin >> a;
    
    cout << "How many tickets were sold for class B? $" << endl;
    cin >> b;
    
    cout << "How many tickets were sold for class C? $" << endl;
    cin >> c;
    
    ticketSoldA = a * classA;
    ticketSoldB = b * classB;
    ticketSoldC = c * classC;
    total = ticketSoldA + ticketSoldB + ticketSoldC;
    
    cout << setprecision(2) << fixed;
    cout << "The amount of ticket sold in class A: $" << ticketSoldA << endl;
    
    cout << "The amount of ticket sold in class B: $" << ticketSoldB <<endl;
    
    cout << "The amount of ticket sold in class C: $" << ticketSoldC <<endl;
    
    cout << "The total sales generated is: $" << total << endl;
    
    return 0;
}
