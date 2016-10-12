#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    int numberOfMale, numberOfFemale, total;
    double malePercentage, femalePercentage;
    
    cout << "Enter the number of male students: " << endl;
    cin >> numberOfMale;
    
    cout << "Enter the number of female students: " << endl;
    cin >> numberOfFemale;
    
    total = numberOfMale +numberOfFemale;
    malePercentage = static_cast<float>(numberOfMale) / total;
    femalePercentage = static_cast<float>(numberOfFemale) / total;
    
    cout << "The percentage of male students are: " << malePercentage*100 << "%" << endl;
    cout << "The percentage of female students are: " << femalePercentage*100 << "%" << endl;
    
    
    return 0;
}
