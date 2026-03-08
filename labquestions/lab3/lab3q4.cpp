#include <iostream>
using namespace std;

const int SIZE = 8;

class Stationery_Inventory {
private:
    string code_name;
    int warehouses[SIZE];

public:
    void set_data(int* arr) {
        cout << "Enter code name: ";
        cin >> code_name;
        for (int i = 0; i < SIZE; ++i) {
            warehouses[i] = *(arr + i);
        }
    }

    void display_reverse() {
        cout << "Warehouses in reverse order:\n";
        for (int i = SIZE - 1; i >= 0; --i) {
            cout << warehouses[i] << " ";
        }
        cout << endl;
    }
};

Stationery_Inventory hold;

void process() {
    int arr[SIZE];
    cout << "Enter 8 values:\n";
    for (int i = 0; i < SIZE; ++i) {
        cin >> arr[i];
    }
    hold.set_data(arr);
    hold.display_reverse();
}

int main() {
    Stationery_Inventory obj;
    int arr[SIZE] = {5, 10, 15, 22, 20, 25, 30, 35};

    obj.set_data(arr);
    obj.display_reverse();

    process();

    return 0;
}
