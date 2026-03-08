#include<iostream>
#include<cstring>
using namespace std;

class Trivia{
    private:
        string name, country, game_name;
        int age;
        float score[3];
        char status[10];
    public:
        void setParticipants(){
            cin.ignore();
            cout << "\nEnter Name        : ";
            getline(cin, name);
            cout << "Enter Country     : ";
            getline(cin, country);
            cout << "Enter Age         : ";
            cin >> age;
            cin.ignore();
            cout << "Enter Game Name   : ";
            getline(cin, game_name);
        }

        void score_Grained(){
            for (int i = 0; i <= 2; i++){
                cout << "\tEnter score " << (i + 1) << " : ";
                cin >> score[i];
            }
        }

        void average_Val(){
            double total = 0;
            for (int i = 0; i <= 3; i++){total += score[i];}

            double avg = total / 3.0;
            set_status(avg);
        }

        void set_status (double avg){
            if (avg >= 80 && avg <= 100){strcpy(status , "Excellent");}
            else if (avg >= 60 && avg < 80){strcpy(status , "Great");}
            else {strcpy(status , "Keep Trying");}
        }

        void display_result(){
            cout << "------------------------------" << endl;
            cout << "         RESULT SCORED        " << endl;
            cout << "------------------------------" << endl;
            cout << "Name             : " << name << endl;
            cout << "Country          : " << country << endl;
            cout << "Age              : " << age << endl;
            cout << "Game Name        : " << game_name << endl;
            for (int i = 0; i < 3; i++) {
                cout << "Score " << (i + 1) << "      : " << score[i] << endl;
            }
            cout << "Status        : " << status << endl;
        }
};

int main(){
    Trivia t;
    int loop;

    cout << "How many warriors? "; cin >> loop;
    for(int i = 0; i <= loop; i++){
        t.setParticipants();
        t.score_Grained();
        t.average_Val();
        t.display_result();
    }

    return 0;
}