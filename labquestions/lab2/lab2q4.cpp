#include <iostream>
using namespace std;

struct Rental {
    char name[20];
    float rent;
    int month;
};

float report(struct Rental R[]) {
    float total = 0.0;
    
    cout << "----------------------------------------------------" << endl;
    cout << "- AMOUNT DUE MORE THAN RM1000.00 -" << endl;
    cout << "----------------------------------------------------" << endl;

    for (int i = 0; i < 3; i++) {
        float due = R[i].rent * R[i].month;
        if (due > 1000.0) {
            cout << endl << "Tenant name : " << R[i].name << endl;
            printf("Monthly rental : RM %.2f\n", R[i].rent);
            cout << "Unpaid months : " << R[i].month << endl;
            printf("Unpaid amount : RM %.2f\n", due);
            total += due;
        }
    }
    return total;
}

int main() {
    struct Rental R[] = {
        {"Megan", 300, 4},
        {"Johnson", 250, 1},
        {"David", 790, 2}
    };

    float total_due = report(R);

    printf("\nTotal rental to be collected : RM %.2f\n", total_due);

        return 0;
}
