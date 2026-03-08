#include <iostream>
#include <iomanip>
#include <ostream>
using namespace std;

int main(){
    float day1, day2;
    
    cout << endl << "Enter the sales for day 1: ";
    cin >> day1;
    cout << "Enter the sales for day 2: ";
    cin >> day2;
    
    cout << endl << "QTech Snd Bhd sale figures for 2 days" << endl;
    cout << "Day 1: $" << fixed << setprecision(2) << day1 << endl; 
    cout << "Day 2: $" << day2 << endl; 
    cout << "The total sales are: $" << day1 + day2 << endl;
    
    return 0;
}