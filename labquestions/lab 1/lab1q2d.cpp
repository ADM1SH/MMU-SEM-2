#include <iostream>
#include <string>
using namespace std;

float getFlavorAndPrice(char &flavor) {
    cout << "Enter Flavor   : ";
    cin >> flavor;
    
    while (flavor != 'c' && flavor != 'C' && flavor != 'v' && flavor != 'V' && flavor != 's' && flavor != 'S') {
        cout << "Invalid flavor! Please enter again (C/V/S): ";
        cin >> flavor;
    }

    switch (flavor) {
        case 'c':
        case 'C':
            return 3.50;
        case 'v':
        case 'V':
            return 3.00;
        case 's':
        case 'S':
            return 2.50;
    }

    return 0.0;
}

int main(){
    float price, totalPrice = 0.0;;
    char flavor, ans;
    int qty;
    string name;

    cout << "Welcome to Yummy Ice-Cream" << endl << endl;
    cout << "********Ice-Cream Flavor********" << endl;
    cout << "[C] Chocolate" << endl;
    cout << "[V] Vanilla" << endl;
    cout << "[S] Strawberry" << endl << endl;
    
    cout << "Enter Name     : ";
    cin >> name;

    price = getFlavorAndPrice(flavor);

    cout << "Enter quantity: ";
    cin >> qty; 
    totalPrice += price * qty;

    cout << "Do you want to buy more? <Y-Yes N-No>   :";
    cin >> ans;

    while (ans == 'Y' || ans == 'y') {
        price = getFlavorAndPrice(flavor);
        cout << "Enter quantity: ";
        cin >> qty;
        totalPrice += price * qty;
        cout << "Do you want to buy more? <Y-Yes N-No>   :";
        cin >> ans;
    }

    cout << endl << "***********RECEIPT***********" << endl;
    cout << "Name          : " << name << endl;
    cout << "Total price   : RM" << totalPrice << endl;

    return 0;
}