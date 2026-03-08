#include <iostream>
using namespace std;

int main(){
    int num, total = 0, i = 0;

    do {
        cout << "enter a number: ";
        cin >> num;
        total = total + num;
        i += 1;
    } while (num != 99);

    cout << "The total is: " << total - 99 << endl;
    cout << "You have entered " << i - 1 << " numbers" << endl;

    return 0;
}