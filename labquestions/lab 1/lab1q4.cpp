#include <iostream>
#include <iomanip>
using namespace std;

void bubbleSort(double* arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                double temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;

    cout << "How many test scores will you enter? ";
    cin >> n;

    double* scores = new double[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter test score " << (i + 1) << ": ";
        cin >> scores[i];
    }

    bubbleSort(scores, n);

    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += scores[i];
    }
    double average = sum / n;

    cout << "The test scores in ascending order, and their average, are:\n";
    cout << "Score\n";
    cout << "-----\n";
    for (int i = 0; i < n; i++) {
        cout << fixed << setprecision(2) << scores[i] << endl; 
    }
    cout << "Average score: " << fixed << setprecision(2) << average << endl;

    delete[] scores;

    return 0;
}