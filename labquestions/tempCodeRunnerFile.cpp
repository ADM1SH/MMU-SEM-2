#include <iostream>
using namespace std;

class Purchase {
private:
    char name[50];
    char code[10];
    int qty;
    float price;
    float total;

public:
    void set_data(const char* n, const char* c, int q, float p);
    void calculate();
    void print();
};

void Purchase::set_data(const char* n, const char* c, int q, float p) {
    for (int i = 0; i < 50 && n[i] != '\0'; i++) {
        name[i] = n[i];
        name[i + 1] = '\0';
    }
    for (int i = 0; i < 10 && c[i] != '\0'; i++) {
        code[i] = c[i];
        code[i + 1] = '\0';
    }
    qty = q;
    price = p;
}

void Purchase::calculate() {
    total = qty * price;
}

void Purchase::print() {
    cout << "========================" << endl;
    cout << "RECEIPT" << endl;
    cout << "========================" << endl;
    cout << "Name : " << name << endl;
    cout << "Product Code : " << code << endl;
    cout << "Quantity : " << qty << endl;
    printf("Product Price : RM %.2f\n", price);
    printf("Total Payment : RM %.2f\n", total);
}

int main() {
    Purchase p;
    char name[50];
    char code[10];
    int qty;
    float price;

    cout << "========================" << endl;
    cout << "WELCOME" << endl;
    cout << "========================" << endl;

    cout << "Enter name : ";
    cin.getline(name, 50);
    cout << "Product code : ";
    cin.getline(code, 10);
    cout << "Enter quantity : ";
    cin >> qty;
    cout << "Enter price : RM ";
    cin >> price;

    p.set_data(name, code, qty, price);
    p.calculate();
    p.print();

    return 0;
}
