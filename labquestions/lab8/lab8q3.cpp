#include<iostream>
#include <cctype>
using namespace std;

class Ticket{
	private:
		int no;
		float price;
		friend class Student;
	public:
		Ticket(){price = 10.00;}
		void setTickets(){
			cout << "Enter number of tickets: ";
			cin >> no;
		}
};

class Student{
	private:
		string id, name, purchase;
		Ticket p;
	public:
		void setStudent(){
			cout << "Enter ID: ";
			cin >> id;
			cout << "Enter name: ";
			getline(cin, name);
		}

		void ticket_entry(){
			char ans;cout << "Do you want to purchase charity tickets [Y/N]: ";
			cin >> ans;

			ans = tolower(ans);
			if(ans == 'y'){
				purchase = "Y";
				p.setTickets();
			} else{ cout << "\n -----No ticket Purchased----- \n";}
		}

		void display(){
			cout << "--------------------" << endl;
			cout << "   Student Details" << endl;
			cout << "--------------------" << endl;
			cout << "Name  : " << name << endl;
			cout << "ID    : " << id << endl;
			cout << "\n =====Additional Details===== \n";

			if(purchase == 'Y'){
				cout << "You have purchased " << p.no << " tickets" << endl;
				cout << "Total amount: " << p.no * p.price << endl;
			} else {cout << "You have not purchased any tickets" << endl";}
		}
};

int main(){
	Student dip[3];
	for(int i = 0; i < 3; i++){
		dip[i].setStudent();
		dip[i].ticket_entry();
		dip[i].display();
	}

	return 0;
}









