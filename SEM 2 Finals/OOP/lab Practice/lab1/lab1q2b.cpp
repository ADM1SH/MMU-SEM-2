#include <iostream>
using namespace std;

int main(){
    int even = 0, odd = 0, num, sum;

    for(int i = 0; i <= 9; i++){
        cout << "Enter a number: ";
        cin >> num;
        sum += num;
        
        if(num % 2 == 0){
            even += 1;
        } else {odd += 1;}

    }

    cout << endl << "There are " << even << " even numbers and " << odd << " odd numbers" << endl;
    cout << "The total of all 10 number are " << sum << endl;
    
    return 0;
}