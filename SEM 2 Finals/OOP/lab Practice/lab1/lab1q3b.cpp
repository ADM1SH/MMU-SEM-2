#include <iostream>
using namespace std;

int main() {
    const int ROWS = 2;
    const int COLS = 3;
    int table[ROWS][COLS] = {
        {10, 20, 30},
        {40, 50, 60}
    };

    for(int i = 0; i < ROWS; i++) {
        cout << "Row " << i + 1 << " : ";
        for(int j = 0; j < COLS; j++) {
            cout << table[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}