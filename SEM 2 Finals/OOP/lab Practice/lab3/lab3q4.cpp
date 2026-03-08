#include <iostream>
using namespace std;

const int SIZE = 8;

class Stationary_Inventory{
    private:
        string code_name;
        int warehouse[SIZE];
    public:
        void set_data(int* arr){
            cout << "--------------------------------------" << endl;
            cout << "Enter Stationary code : "; cin >> code_name;
            cout << "--------------------------------------"<< endl;
            cout << "            Inventory Info            " << endl;
            cout << "--------------------------------------" << endl;
            cout << "Stationary code: " << code_name << endl;

            for (int i = 0; i < SIZE; i++) {
                warehouse[i] = arr[i];
                cout << "Warehouse " << (i + 1) << "   : " << warehouse[i] << endl;
            }
        }
    
    void display_reverse() const {
        cout << "--------------------------------------" << endl;
        for (int i = SIZE - 1; i >= 0; --i) {
            cout << "Warehouse " << (SIZE - i) << " : " << warehouse[i] << endl;
        }
    }
};

Stationary_Inventory hold;

void process() {
    int stocks[SIZE];
    cout << "--------------------------------------" << endl;
    cout << "Colorful Book Holder Stock" << endl;
    cout << "--------------------------------------" << endl;
    cout << "Enter the stocks for 8 warehouses:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cin >> stocks[i];
    }
    cout << "\nprocess ( )" << endl;
    cout << "######################################" << endl;
    cout << "Item Entry" << endl;
    hold.set_data(stocks);
    hold.display_reverse();
}

int main() {
    Stationary_Inventory item;
    int data[SIZE] = {5, 10, 15, 22, 20, 25, 30, 35};

    cout << "SMART Stationery Shop" << endl;
    cout << "######################################" << endl;
    cout << "Item Entry" << endl;
    item.set_data(data);
    item.display_reverse();

    process();

    return 0;
}

