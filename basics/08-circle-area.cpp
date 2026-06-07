#include <iostream>
using namespace std;

int main() {
    double diameter;
    const double PI = 3.14159;
    
    cout << "Enter diameter of circle: ";
    cin >> diameter;
    
    double radius = diameter / 2.0;
    double area = PI * radius * radius;
    
    cout << "Area of circle: " << area << endl;
    
    return 0;
}
