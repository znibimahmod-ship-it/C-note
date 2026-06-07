#include <iostream>
using namespace std;

int main() {
    // Using cout for output
    cout << "Welcome to C++ Input/Output Tutorial!" << endl;
    cout << "===================================" << endl;
    
    // Using cin for input
    string name;
    int age;
    
    cout << "Enter your name: ";
    cin >> name;
    
    cout << "Enter your age: ";
    cin >> age;
    
    // Display results
    cout << "\nHello, " << name << "!" << endl;
    cout << "You are " << age << " years old." << endl;
    
    return 0;
}
