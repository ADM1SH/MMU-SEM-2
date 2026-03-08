#include <iomanip>
#include <iostream>
using namespace std;

class TravelPackage{
    public:
        char package;
        int noAdult, noChild;
        float adultPrice, childPrice, discount, totalPrice;
};

int main() {
    TravelPackage t;
    char choice;

    do {
        cout << "Select travel package <A,B,C> : ";
        cin >> t.package;
        t.package = toupper(t.package);
        if (t.package != 'A' && t.package != 'B' && t.package != 'C') {
            cout << "Invalid selection." << endl;
        }
    } while (t.package != 'A' && t.package != 'B' && t.package != 'C');

    cout << "Enter no of adult : ";
    cin >> t.noAdult;
    cout << "Enter no of children : ";
    cin >> t.noChild;

    switch (t.package) {
        case 'A':
            t.adultPrice = 1000.00;
            t.childPrice = 500.00;
            break;
        case 'B':
            t.adultPrice = 800.00;
            t.childPrice = 600.00;
            break;
        case 'C':
            t.adultPrice = 500.00;
            t.childPrice = 300.00;
            break;
    }

    t.totalPrice = (t.noAdult * t.adultPrice) + (t.noChild * t.childPrice);

    if (t.totalPrice > 3000.00)
        t.totalPrice *= 0.8; // apply 20% discount

    cout << fixed << setprecision(2);
    cout << "Total price : RM" << t.totalPrice << endl;

    return 0;
}