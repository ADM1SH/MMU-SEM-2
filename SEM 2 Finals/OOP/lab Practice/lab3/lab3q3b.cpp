#include <cctype>
#include <iomanip>
#include <iostream>
using namespace std;

class Purchase{
    private:
        string name, code;
        int qty;
        float price, total;
    public:
        void set_data();
        void calculate();
        void print();
};

void Purchase::set_data(){
    cout << "========================" << endl;
    cout << "         WELCOME        " << endl;
    cout << "========================" << endl;
    cout << "Enter Name     : "; getline(cin, name);
    cout << "Product Code   : "; cin >> code;
    cout << "Enter Quantity : "; cin >> qty;
    cout << "Enter Price    : RM "; cin >> price;
}

void Purchase::calculate(){total = price * qty;}

void Purchase::print(){
    cout << endl << fixed << setprecision(2);
    cout << "========================" << endl;
    cout << "        RECEIPT         " << endl;
    cout << "========================" << endl;
    cout << "Name          : " << name << endl;
    cout << "Product Code  : " << code << endl;
    cout << "Quantity      : " << qty << endl;
    cout << "Product Price : RM " << price << endl;
    cout << "Total Payment : RM " << total << endl;

}

int main(){
    Purchase p;
    char ans = 'y';
    
while (tolower(ans) == 'y') {
    cin.ignore();
    p.set_data();
    p.calculate();
    p.print();
    cout << endl << "You have another customer to purchase item? [Y/N]: "; cin >> ans;
}
    return 0;
}