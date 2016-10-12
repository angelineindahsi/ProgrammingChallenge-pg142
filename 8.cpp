#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    double weightWidget = 12.5;
    double emptyPallet, weightPallet, numberOfWidget;
    
    cout << "Enter the weight of the empty pallet weight (in pounds) " << endl;
    cin >> emptyPallet;
    
    cout << "Enter the weight of the pallet with widgets (in pounds) " << endl;
    cin >> weightPallet;
    
    numberOfWidget = (weightPallet - emptyPallet) / weightWidget;
    
    cout << "The number of widgets on the pallet is " << numberOfWidget << endl;
    
    return 0;
}
