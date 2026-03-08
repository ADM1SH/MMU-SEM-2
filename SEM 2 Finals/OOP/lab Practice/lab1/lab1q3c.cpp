#include <iomanip>
#include <iostream>
using namespace std;

double average(const double* arr, int size) {
    double sum = 0;
    for (int i = 0; i < size; ++i)
        sum += arr[i];
    return (size > 0) ? (sum / size) : 0;
}

int main(){
    int days;
    double temp;
    
    cout << "How many days would you like to record the temperature of: "; cin >> days;
    cout << endl;
    double* arr = new double[days];
    
    for (int i = 0; i < days; i++){
        cout << "Enter temperature for day " << (i + 1) << " : "; cin >> temp;
        arr[i] = temp;
    }

    cout << endl << "Average temperature: " << fixed << setprecision(2) << average(arr, days) << endl;

    delete[] arr;
    return 0;
}