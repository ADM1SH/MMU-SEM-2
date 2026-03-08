#include <iostream>
using namespace std;

const int SIZE = 8;

class stationery_inventory {
private:
    int code;
    string name;
    int warehouse[SIZE];
public:
    void set_data(int* arr) {
        for (int i = 0; i < SIZE; ++i) {
            warehouse[i] = arr[i];
        }
    }
    void display_reverse() {
        cout << "Warehouses in reverse order:" << endl;
        for (int i = SIZE - 1; i >= 0; --i) {
            cout << warehouse[i] << " ";
        }
        cout << endl;
    }
};

stationery_inventory hold;

int process() {
    int values[SIZE];
    cout << "Enter the stocks for 8 warehouses:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cin >> values[i];
    }

    hold.set_data(values);
    hold.display_reverse();

    return 0;
}

int main() {
    stationery_inventory item;
    int arr[SIZE] = {5, 10, 15, 22, 20, 25, 30, 35};

    item.set_data(arr);
    item.display_reverse();

    process();

    return 0;
}