#include <iostream>
using namespace std;

int main(){
    int num, counter = 10, odd = 0, even = 0, total = 0;
    
    for (int i = 0; i < counter; i++){
        cout << "Please enter an integers: ";
        cin >> num;
        total = num + total;
        if (num % 2 !=0){
            odd += 1;
        } else {
            even += 1;
        }
    }

    cout << endl<< "There are " << odd << " odd numbers and " << even << " even numbers." << endl;
    cout << "The total of all 10 numbers are " << total << endl;

    return 0;
}