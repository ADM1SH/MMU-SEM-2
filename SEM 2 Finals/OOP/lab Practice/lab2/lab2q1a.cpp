#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

float kineticEnergy(float mass, float velocity){return (0.5 * mass * pow(velocity, 2));}

int main(){
    float KE, m, v;

    cout << "Enter an object's mass and velocity as required..." << endl << endl;
    cout << "Mass in Kilograms: "; cin >> m;
    cout << "Velocity in meters per second: "; cin >> v;

    KE = kineticEnergy(m, v);

    cout << endl << "The kinetic energy of this object is " << fixed << setprecision(2) << kineticEnergy(m, v) << " joules" << endl;

    return 0;
}