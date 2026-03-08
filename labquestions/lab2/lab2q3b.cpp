#include <iostream>
using namespace std;

struct Student {
    char name[30], grade;
    float marks[5], avg;
};

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
    Student S1;

    // Get student name
    cout << "Enter Name :";
    cin.getline(S1.name, 30);

    // Get marks for 5 subjects
    for (int i = 0; i < 5; i++) {
        cout << "Enter Marks : ";
        cin >> S1.marks[i];
    }

    // Calculate average
    S1.avg = average(S1.marks, 5);

    // Determine grade
    S1.grade = grades(S1.avg);

    // Output results
    cout << "Name : " << S1.name << endl;
    cout << "Average : " << S1.avg << endl;
    cout << "Grade : " << S1.grade << endl;

    return 0;
}