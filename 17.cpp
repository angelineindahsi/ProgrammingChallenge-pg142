#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    int Number1, Number2;
    int total, computertotal;
    int seed = time(0);
    srand(seed);
        
    Number1 = 1 + rand() % 100;
    Number2 = 1 + rand() % 100;
    computertotal = Number1 + Number2;
        
    cout << setw(0) << Number1 << endl;
    cout << setw (0) << Number2 << endl;
    cout << "----\n";
    cin >> total;
        
    cout << "The correct answer is " << computertotal << endl;
    
        return 0;
        
    }
