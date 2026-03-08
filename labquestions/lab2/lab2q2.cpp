#include <iostream>
using namespace std;

// Function to get coefficients a, b, and c using references
void get_a_b_c(double& a, double& b, double& c) {
    cout << "Enter a, b and c: ";
    cin >> a >> b >> c;
}

// Function to compute the discriminant
double bb_4ac() {
    double a, b, c; // Coefficients of a quadratic equation
    get_a_b_c(a, b, c);
    return b * b - 4 * a * c;
}

int main() {
    double discriminant = bb_4ac();
    cout << "The discriminant is " << discriminant << endl;
    return 0;
}