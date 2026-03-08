#include <iostream>
using namespace std;

int main(){
    float overtimeRate = 24.35, basePay = 18.50, overtimeHours, overtimeWages, regHours = 40.00, totalHours, regWages, totalWages;

    cout << "Please enter hours you've worked this week: ";
    cin >> totalHours;

    if (totalHours > 40){
        overtimeHours = totalHours - regHours;
    } else{
        overtimeHours = 0;
    }

    regWages = basePay * regHours;
    overtimeWages = overtimeRate * overtimeHours;
    totalWages = regWages + overtimeWages;

    cout << "Your wages for this week is: " << totalWages << "RM" << endl;

    return 0;

}