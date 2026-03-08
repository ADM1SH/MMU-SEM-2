#include <iostream>
using namespace std;

class Achievement{
    private:
        string name;
        int score;
    public:
        void set_data(){
            cin.ignore();
            cout << "Enter the class name     : ";
            getline(cin, name);
            cout << "The class achievement    : ";
            cin >> score;
            cout << endl;
        }

        void display_scale(){
            cout << "====================================" << endl;
            cout << name << endl;
            cout << "The Class Passing Grade Achievement: " << score << "%" << endl;

            if (score >= 85 && score <= 100) {
                cout << "* * * * *" << endl;
            } else if (score >= 70 && score < 85) {
                cout << "* * * *" << endl;
            } else if (score >= 60 && score < 70) {
                cout << "* * *" << endl;
            } else if (score >= 50 && score < 60) {
                cout << "* *" << endl;
            } else {
                cout << "Poor Achievement" << endl;
            }

            cout << "====================================" << endl;
        }
};

int main(){
    Achievement A;
    Achievement arr[4]; // For 4 classes

    // Input loop (to set data for each class)
    for (int i = 0; i < 4; ++i) {
        arr[i].set_data(); // Assume this sets name and score
    }

    // Output loop (to display each class's achievement)
    for (int i = 0; i < 4; ++i) {
        arr[i].display_scale();
    }

    return 0;
}