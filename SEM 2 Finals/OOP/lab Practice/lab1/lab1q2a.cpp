#include <iostream>
using namespace std;

void findMax(int &maxVal){
    int num;
    cout << "Enter a number: ";
    cin >> maxVal;
    for(int i = 1; i < 3; ++i){
        cout << "Enter a number: ";
        cin >> num;
        if(num > maxVal) maxVal = num;
    }
}

int main(){
    int result;
    findMax(result);
    cout << "The largest value is: " << result << endl;

    return 0;
}