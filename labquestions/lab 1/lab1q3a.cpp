#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    const int NUM_EMPS = 5;
    int index, hours[NUM_EMPS];
    double payRate[NUM_EMPS], grossPay;

    cout << "\nEnter the hours worked and hourly pay rates for" << NUM_EMPS << " employees. \n";

    for (index = 0; index < NUM_EMPS; index++) {
        cout << "Hours worked by employee #" << (index + 1) << ": ";
        cin >> hours[index];
        cout << "Hourly pay rate for employee #" << (index + 1) << ": RM";
        cin >> payRate[index];
    }

    cout << "\nHere is the gross pay for each employee:\n";
    cout << fixed << setprecision(2);

    for (index = 0; index < NUM_EMPS; index++) {
        grossPay = hours[index] * payRate[index];
        cout << "Employee #" << (index + 1) << ": RM " << grossPay << endl;
    }

    return 0;
}
