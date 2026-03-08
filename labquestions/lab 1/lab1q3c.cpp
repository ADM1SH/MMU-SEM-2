#include <iostream>
#include <iomanip>
using namespace std;

float average(float* temps, int days) {
    float sum = 0;
    for (int i = 0; i < days; i++) {
        sum += temps[i];
    }
    return sum / days;
}

int main(){
    int days;
    cout << "How many days would you like to record the temperature? ";
    cin >> days;

    float* temps = new float[days];

    for (int i = 0; i < days; i++) {
        cout << "Enter temperature day " << i + 1 << " : ";
        cin >> *(temps + i);
    }

    float avg = average(temps, days);
    cout << fixed << setprecision(2);
    cout << "\nAverage temperature : " << avg << " Celcius" << endl;

    delete[] temps;

    return 0;
}