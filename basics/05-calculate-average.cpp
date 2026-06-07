#include <iostream>
using namespace std;

int main() {
    int mark1, mark2, mark3;
    
    cout << "Enter three marks: " << endl;
    cin >> mark1 >> mark2 >> mark3;
    
    double average = (mark1 + mark2 + mark3) / 3.0;
    
    cout << "Average: " << average << endl;
    
    return 0;
}
