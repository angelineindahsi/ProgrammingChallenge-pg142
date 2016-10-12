#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    double score1, score2, score3, score4, score5, total, average;
    
    cout << "Enter score 1: " << setprecision(1) << endl;
    cin >> score1;
    
    cout << "Enter score 2: " << setprecision(1) << endl;
    cin >> score2;
    
    cout << "Enter score 3: " << setprecision(1) << endl;
    cin >> score3;
    
    cout << "Enter score 4: " << setprecision(1) << endl;
    cin >> score4;
    
    cout << "Enter score 5: " << setprecision(1) << endl;
    cin >> score5;
    
    total= score1 + score2 + score3 + score4 + score5;
    average = total / 5;
    cout << "The average is: " << average << setprecision(1) << endl;
    
    return 0;
}
