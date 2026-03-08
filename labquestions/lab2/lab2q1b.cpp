#include <iostream>
using namespace std;

void kineticEnergy(double* ke, double* mass, double* velocity) {
    *ke = 0.5 * (*mass) * (*velocity) * (*velocity);
}

int main() {
    double mass, velocity, ke;

    cout << "Enter an object's mass and velocity as required...." << endl;
    cout << "Mass in kilograms: ";
    cin >> mass;
    cout << "Velocity in meters per second: ";
    cin >> velocity;

    kineticEnergy(&ke, &mass, &velocity);

    cout << "The kinetic energy of this object is " << ke << " joules." << endl;

    return 0;
}
