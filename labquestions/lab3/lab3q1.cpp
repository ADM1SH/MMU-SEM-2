#include <iostream>
using namespace std;

class TravelPackage {
public:
    char package;
    int noAdult, noChild;
    float adultPrice, childPrice, discount, totalPrice;

    void setPackage(char pkg) {
        package = pkg;
        switch (package) {
            case 'A':
                adultPrice = 1000.00;
                childPrice = 500.00;
                break;
            case 'B':
                adultPrice = 800.00;
                childPrice = 600.00;
                break;
            case 'C':
                adultPrice = 500.00;
                childPrice = 300.00;
                break;
            default:
                cout << "Invalid selection.\n";
        }
    }

    void setNoAdult(int adults) {
        noAdult = adults;
    }

    void setNoChild(int children) {
        noChild = children;
    }

    float calculateTotalPrice() {
        totalPrice = (adultPrice * noAdult) + (childPrice * noChild);
        if (totalPrice > 3000.00) {
            discount = totalPrice * 0.2;
            return totalPrice - discount;
        }
        return totalPrice;
    }
};

int main() {
    TravelPackage package;

    do {
        cout << "Select travel package <A,B,C> : ";
        char pkg;
        cin >> pkg;
        package.setPackage(pkg);
    } while (package.package!= 'A' && package.package!= 'B' && package.package!= 'C');

    cout << "Enter no of adult : ";
    int adults;
    cin >> adults;
    package.setNoAdult(adults);

    cout << "Enter no of children : ";
    int children;
    cin >> children;
    package.setNoChild(children);

    cout << "Total price : RM" << package.calculateTotalPrice() << endl;

    return 0;
}
