#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

double kineticEnergy(double& mass, double& velocity, double& KE) {
    KE = (0.5 * mass * pow(velocity, 2));
    return KE;
}

int main(){
    double KE, m, v;

    cout << "Enter an object's mass and velocity as required..." << endl << endl;
    cout << "Mass in Kilograms: "; cin >> m;
    cout << "Velocity in meters per second: "; cin >> v;

    KE = kineticEnergy(m, v, KE);

    cout << endl << "The kinetic energy of this object is " << fixed << setprecision(2) << KE << " joules" << endl;

    return 0;
}