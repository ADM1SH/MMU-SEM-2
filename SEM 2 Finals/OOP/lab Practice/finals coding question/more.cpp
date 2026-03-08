#include <iostream>
using namespace std;

// Function overloading for subtracting integers
int subtract(int a, int b) {
    return a - b;
}

// Function overloading for subtracting doubles
double subtract(double a, double b) {
    return a - b;
}

int main() {
    int intResult = subtract(10, 3);
    double doubleResult = subtract(10.5, 3.2);

    cout << "Subtracting integers: 10 - 3 = " << intResult << endl;
    cout << "Subtracting doubles: 10.5 - 3.2 = " << doubleResult << endl;

    return 0;
}
