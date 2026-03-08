#include <iostream>
using namespace std;

class purchase{
    private:
        string name, code;
        int qty;
        float price, total;
    public:
        void setName(string n){name = n;}
        void setCode(string c){code = c;}
        void setQty(int q){qty = q;}
        void setPrice(float p){price = p;}
        void setTotal(float t){total = t;}

        float calculateTotal(){
            total = price * qty;
            return total;
        }

        void display(){
            cout << "==========================" << endl;
            cout << "         RECEIPT          " << endl;
            cout << "==========================" << endl;
            cout << "Name   : " << name << endl;
            cout << "Product code: " << code << endl;
            cout << "Quantity: " << qty << endl;
            cout << "Product price: " << price << endl;
            cout << "Total Payment: " << total << endl;
        }
};

int main(){
    purchase p;
    
    string name, code, ans;
    int qty;
    float price, total = 0;

    do{
        cout << "==========================" << endl;
        cout << "         WELCOME          " << endl;
        cout << "==========================" << endl; 

        cout << "Enter Name: ";
        cin >> name;
        p.setName(name);

        cout << "Enter Product Code: ";
        cin >> code;
        p.setCode(code);

        cout << "Enter Quantity: ";
        cin >> qty;
        p.setQty(qty);

        cout << "Enter Price: ";
        cin >> price;
        p.setPrice(price);

        p.calculateTotal();
        p.display();

        cout << "You Have Another Customer To Purchase An Item (Y/N): ";
        cin >> ans;

        if (ans == "N" || ans == "n"){cout << "Ending Program, Thank You." << endl;}

    } while (ans == "Y" || ans == "y");

    return 0;
}