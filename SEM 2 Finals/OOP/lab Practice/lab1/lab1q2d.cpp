#include <iostream>
using namespace std;

int main(){
    string name;
    char flavor, ans = 'y';
    int qty;
    float total = 0;
    const float c = 3.5, v = 3.0, s = 2.5;
    
    cout << "Welcome to Yummy Ice-Cream" << endl << endl;
    cout << "**********Ice-Cream Flavor**********" << endl;
    cout << "[C] Chocolate\n[V] Vanilla\n[S] Strawberry" << endl << endl;

    cout << "Enter Name     : "; getline(cin, name);
    while (ans == 'y'){
        cout << "Enter Flavor   : "; cin >> flavor;
        flavor = tolower(flavor);
        
        if(flavor != 'c' && flavor != 'v' && flavor != 's'){
            cout << "Incorrect flavor, Re-enter choice: ";
            cin >> flavor;
            flavor = tolower(flavor);
        }
        
        cout << "Enter Quantity : "; cin >> qty;
        
        if(flavor == 'c'){total += qty * c;} 
        else if(flavor == 'v'){total += qty * v;}
        else (total += qty * s);

        cout << "Do you want to buy more: "; cin >> ans;
        ans = tolower(ans);
    }

    cout << endl << "**********RECEIPT**********" << endl;
    cout << "Name         : " << name << endl;;
    cout << "Total Price  : RM " << total << endl;
    
    return 0;
}