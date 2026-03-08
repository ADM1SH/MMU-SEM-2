#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    float day1, day2, total;
    cout << "Enter the sales for day 1 : ";
    cin >> day1;

    // prompt user to enter the sales for second day
    cout << "Enter the sales for day 2 : ";
    cin >> day2;

    // calculate the total sales
    total = day1 + day2;

    // display the sales figures with the total
    cout << "QTech Sdn Bhd Sales figures for 2 days" << endl;
    cout << fixed << setprecision(2);
    cout << "Day 1 : " << day1 << endl;
    cout << "Day 2 : " << day2 << endl;
    cout << "Total : " << total << endl;

    return 0;
}