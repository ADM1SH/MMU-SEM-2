#include <iomanip>
#include <iostream>
using namespace std;

//Prototype 
float report(struct Rental[]) ;

struct Rental{ 
    char name[20];
    float rent;
    int month;
};

int main(){
    float total;

    cout << "----------------------------------------------------" << endl;
    cout << "-         AMOUNT DUE MORE THAN RM1000.00           -" << endl;
    cout << "----------------------------------------------------" << endl;

    Rental R[3] = {
        {"Megan", 300.00, 4},
        {"David", 790.00, 2},
        {"Johnson", 250.00, 1}
    };
    total = report(R);
    cout << "Total rental to be collected is: RM" << fixed << setprecision(2) << total << endl;

    return 0;   
}

float report(Rental R[3]) {
    cout << fixed << setprecision(2);
    float total = 0;
    for (int i = 0; i < 3; i++) {
        float unpaid = R[i].rent * R[i].month;
        if (unpaid > 1000) {
            cout << "Tenant Name     : " << R[i].name << endl;
            cout << "Monthly Rental  : " << R[i].rent << endl;
            cout << "Unpaid Months   : " << R[i].month << endl;
            cout << "Unpaid Amount   : " << fixed << setprecision(2) << unpaid << endl << endl;
            total += unpaid;
        }
    }
    return total;
}