#include <iostream>
using namespace std;

// Function to calculate average marks
double average(float marks[], int size) {
    float sum = 0;
    for (int i = 0; i < size; i++) {
        sum += marks[i];
    }
    return static_cast<double>(sum) / size;
}

// Function to determine grade based on average
char grades(double avg) {
    if (avg >= 80) return 'A';
    else if (avg >= 60) return 'B';
    else if (avg >= 50) return 'C';
    else return 'F';
}

int main() {
    char name[50];
    float marks[5];

    // Get student name
    cout << "Enter Name :";
    cin.getline(name, 50);

    // Get marks for 5 subjects
    for (int i = 0; i < 5; i++) {
        cout << "Enter Marks : ";
        cin >> marks[i];
    }

    // Calculate average
    double avg = average(marks, 5);

    // Determine grade
    char grade = grades(avg);

    // Output results
    cout << "Name : " << name << endl;
    cout << "Average : " << avg << endl;
    cout << "Grade : " << grade << endl;

    return 0;
}
