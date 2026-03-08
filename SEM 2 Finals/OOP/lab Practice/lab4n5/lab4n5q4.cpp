#include <iostream>
using namespace std;

class Strawberry {
private:
    string selection;
    double price;
public:
    void dispStrawberrySelection() {
        cout << "[1] Strawberry & Nutella Crepe         Price: RM10.00" << endl;
        cout << "[2] Strawberry & Chocolate Crepe       Price: RM12.00" << endl;
        cout << "[3] Strawberry Waffle with Custard     Price: RM13.40" << endl;
        cout << "[4] Strawberry Smoothie                Price: RM10.00" << endl;
        cout << "[5] Strawberry & Country Cream         Price: RM13.00" << endl;
    }

    void purchase() {
        int choice;
        cout << "Enter your choice based on the number: ";
        cin >> choice;

        switch (choice) {
            case 1:
                selection = "Strawberry & Nutella Crepe";
                price = 10.00;
                break;
            case 2:
                selection = "Strawberry & Chocolate Crepe";
                price = 12.00;
                break;
            case 3:
                selection = "Strawberry Waffle with Custard";
                price = 13.40;
                break;
            case 4:
                selection = "Strawberry Smoothie";
                price = 10.00;
                break;
            case 5:
                selection = "Strawberry & Country Cream";
                price = 13.00;
                break;
            default:
                selection = "Not Available";
                price = 0.00;
        }
    }

    double getPrice() const { return price; }
    string getSelection() const { return selection; }
};

class Customer {
private:
    string name;
    string strawSelection;
    double payment;
public:
    void set_data() {
        cout << "Enter Name       : ";
        getline(cin >> ws, name); // ws to consume any leading whitespace
    }

    void getOrder() {
        Strawberry st;
        st.dispStrawberrySelection();
        st.purchase();
        strawSelection = st.getSelection();
        payment = st.getPrice();
    }

    void dispDetails() const {
        cout << "...................................." << endl;
        cout << name << ", your purchase details" << endl;
        cout << "...................................." << endl;
        cout << "Selection          : " << strawSelection << endl;
        cout << "Total Payment (RM) : " << payment << endl;
    }
};

int main() {
    Customer cust;
    cust.set_data();
    cust.getOrder();
    cust.dispDetails();
    return 0;
}
