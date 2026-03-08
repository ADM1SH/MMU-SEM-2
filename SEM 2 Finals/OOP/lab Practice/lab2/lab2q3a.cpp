#include <iomanip>
#include <iostream>
using namespace std;

double average(const double* arr, int size) {
    double sum = 0;
    for (int i = 0; i < size; ++i){sum += arr[i];}
    return (size > 0) ? (sum / size) : 0;
}

char grade(int result) {
    if (result >= 80) { return 'A'; }
    else if (result >= 60) { return 'B'; }
    else if (result >= 50) { return 'C'; }
    else { return 'F'; }
}

int main(){
    string name;
    const int numSubjects = 5;
    double arr[numSubjects];

    cout << "Enter name: "; getline(cin, name);
    
    for (int i = 0; i < numSubjects; i++){
        cout << "Enter marks of subject " << (i + 1) << " : "; 
        cin >> arr[i];
    }

    cout << endl << "Name    : " << name << endl;
    cout << "Average : " << fixed << setprecision(2) << average(arr, numSubjects) << endl;
    cout << "Grade   : " << grade(average(arr, numSubjects)) << endl;
    return 0;
}