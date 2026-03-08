#include <iostream>
using namespace std;

// Function prototype using pointers (b)
void kineticEnergyPtr(double* ke, double* m, double* v);

// Function prototype using references (c)
void kineticEnergyRef(double& ke, double& m, double& v);

int main() {
    double mass, velocity, ke1 = 0.0, ke2 = 0.0;

    cout << "Enter mass in kilograms: ";
    cin >> mass;
    cout << "Enter velocity in meters per second: ";
    cin >> velocity;

    // Using pointer-based function
    kineticEnergyPtr(&ke1, &mass, &velocity);
    cout << "Kinetic energy (using pointers): " << ke1 << " J" << endl;

    // Using reference-based function
    kineticEnergyRef(ke2, mass, velocity);
    cout << "Kinetic energy (using references): " << ke2 << " J" << endl;

    return 0;
}

void kineticEnergyPtr(double* ke, double* m, double* v) {
    *ke = 0.5 * (*m) * (*v) * (*v);
}

void kineticEnergyRef(double& ke, double& m, double& v) {
    ke = 0.5 * m * v * v;
}