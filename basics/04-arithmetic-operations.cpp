#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    
    // Input three numbers
    cout << "Enter first number: ";
    cin >> num1;
    
    cout << "Enter second number: ";
    cin >> num2;
    
    cout << "Enter third number: ";
    cin >> num3;
    
    // Arithmetic operations
    int sum = num1 + num2 + num3;
    int product = num1 * num2 * num3;
    double average = (num1 + num2 + num3) / 3.0;
    
    // Display results
    cout << "\nResults:" << endl;
    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;
    cout << "Average: " << average << endl;
    
    return 0;
}
