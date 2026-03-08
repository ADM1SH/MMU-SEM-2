#include <iostream>
using namespace std;

struct Rental {
    char name[20];
    float rent;
    int month;
};

int main() {
    Rental r1 = {"Megan", 300, 4};
    cout << r1.name << " owes RM " << r1.rent * r1.month << endl;
    return 0;
}
