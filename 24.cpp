#include <iostream>
using namespace std;

int main () {
    string name, city, college, profession, animal, petName;
    int age;
    
    cout << "Enter your name: " << endl;
    cin >> name;
    
    cout << "Enter your age: " << endl;
    cin >> age;
    
    cout << "Enter the name of a city: " << endl;
    cin >> city;
    
    cout << "Enter the name of a college: " << endl;
    cin >> college;
    
    cout << "Enter a profession: " << endl;
    cin >> profession;
    
    cout << "Enter a type of animal: " << endl;
    cin >> animal;
    
    cout << "Enter a pet's name: " << endl;
    cin >> petName;
    
    cout << "There once was a person named " << name << " who lived in " << city << ". At the age of " << age << ", " << name << " went to college at " << college << ". "<< name << " graduated and went to work as a " << profession << ". Then, " << name << " adopted a(n) " << animal << " named " << petName << ". They both lived happily ever after!" << endl;
    
    return 0;
}
