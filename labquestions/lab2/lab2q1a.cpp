#include <iostream>
using namespace std;

double kinetic (double m, double v){
    return 0.5 * m * v * v;
}

int main(){
    double mass, velocity;

    cout << "Enter the objects mass and velocity..." << endl;
    cout << "mass in kilograms ";
    cin >> mass;
    cout << "velocity in meters per second ";
    cin >> velocity;

    double ke = kinetic(mass, velocity);

    cout << endl << "The kinetic energy of this object is " << ke << " joules." << endl;

    return 0;
}