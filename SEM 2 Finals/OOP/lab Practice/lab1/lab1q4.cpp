#include <iomanip>
#include <iostream>
using namespace std;

void sort(double* arr, int size) {
    for (int i = 0; i < size - 1; ++i) {
        int minIdx = i;
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[minIdx])
                minIdx = j;
        }
        if (minIdx != i)
            swap(arr[i], arr[minIdx]);
    }
}

double average(const double* arr, int size) {
    double sum = 0;
    for (int i = 0; i < size; ++i)
        sum += arr[i];
    return (size > 0) ? (sum / size) : 0;
}

int main(){
    int score;
    double total;

    cout << "How many test scores will you enter? "; cin >> score;
    double* arr = new double[score];

    for (int i = 0; i < score; i++){
        cout << "Enter test score " << (i + 1) << ": "; cin >> total;
        arr[i] = total;
    }

    sort(arr, score);

    cout << "\nThe test scores in ascending order, and their average, are:\n";
    cout << "Score\n-----\n";
    cout << fixed << setprecision(2);
    for (int i = 0; i < score; ++i)
        cout << *(arr + i) << endl;

    cout << "Average score: " << average(arr, score) << endl;
    delete[] arr;
    return 0;
}
