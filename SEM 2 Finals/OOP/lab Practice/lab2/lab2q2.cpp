#include <iostream>
#include <iomanip>
using namespace std;

// Function to input coefficients a, b, and c
void get_a_b_c(double &a, double &b, double &c) {
    cout << "Enter coefficient a: ";
    cin >> a;
    cout << "Enter coefficient b: ";
    cin >> b;
    cout << "Enter coefficient c: ";
    cin >> c;
}

double bb_4ac( ){
    double a, b, c; // Coefficients of a quadratic equation
    get_a_b_c(a, b, c);
    return b*b - 4*a*c;
}

int main(){
    double result = bb_4ac();
    cout << fixed << setprecision(2);
    cout << "The value of b^2 - 4ac is: " << result << endl;

    return 0;
}