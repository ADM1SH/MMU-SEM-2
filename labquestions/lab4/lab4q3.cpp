#include <iostream>
using namespace std;

class Achievement{
	private:
		string class_name;
		int score;
	public:
		void set_data(string cn, int sc){
			class_name = cn;
			score = sc;
		}

		void display_scale(){
			cout << "\n============CLASS ACHIEVEMENTS================\n";
			cout << "\t" << class_name << endl;
			cout << "Class Achevenments: " << score << "%" << endl;

			if(score >= 80 && score <= 100) {cout << "* * * * *" << endl;}
			else if(score >= 70 && score < 80) {cout << "* * * *" << endl;}
			else if(score >= 60 && score < 70) {cout << "* * *" << endl;}
			else if(score >= 50 && score < 60) {cout << "* *" << endl;}
			else{cout << "Poor Achievement" << endl;}
		}

};

int main(){
	Achievement A[4];
	string cn;
	int sc;

	for(int i = 0; i<4; i++){
		cout << "Enter Class Name: ";
		cin >> cn;
		cout << "Enter Class Score: ";
		cin >> sc;
		A[i].set_data(cn, sc);
	}

	cout << "\n=============RESULT================\n";
	for(int i = 0; i<4; i++){A[i].display_scale();}

	return 0;
}
