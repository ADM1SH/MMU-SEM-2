#include <iostream>
using namespace std;

int main(){
    int num, total = -99;
    do{
        cout << "Enter a number: "; cin >> num;
        total += num;
    } while (num != 99);

    cout << "The total is: " << total << endl;

    return 0;
}