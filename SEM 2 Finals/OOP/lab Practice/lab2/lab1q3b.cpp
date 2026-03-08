#include <iomanip>
#include <iostream>
using namespace std;

double average(const double* arr, int size) {
    double sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return (size > 0) ? (sum / size) : 0;
}

char grade(int result) {
    if (result >= 80) return 'A';
    else if (result >= 60) return 'B';
    else if (result >= 50) return 'C';
    else return 'F';
}

struct Student {
    char name[30], grade;
    float marks[5], avg;
};

int main() {
    string name;
    const int numSubjects = 5;
    double arr[numSubjects];

    cout << "Enter name               : ";
    getline(cin, name);

    for (int i = 0; i < numSubjects; i++) {
        cout << "Enter marks of subject " << (i + 1) << " : ";
        cin >> arr[i];
    }

    double avg = average(arr, numSubjects);
    char finalGrade = grade(avg);

    cout << "\n----------- RESULT -----------\n";
    cout << "Name    : " << name << endl;
    cout << fixed << setprecision(2);
    cout << "Average : " << avg << endl;
    cout << "Grade   : " << finalGrade << endl;

    return 0;
}