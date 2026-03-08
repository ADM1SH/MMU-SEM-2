#include <iostream>
using namespace std;

class Strawberry{
	private:
		string selection;
		double price;
	public:
		void dispStrawberrySelection(){
			cout << "[1] Strawberry & Nutella Crepe        Price: RM10.00" << endl;
			cout << "[2] Strawberry & Chocolate Crepe      Price: RM12.00" << endl;
			cout << "[3] Strawberry Waffel with Custard    Price: RM13.40" << endl;
			cout << "[4] Strawberry Smoothie               Price: RM10.00" << endl;
			cout << "[5] Strawberry & Country Cream        Price: RM13.00" << endl;
		}

		void purchase(){
			int choice;
			cout << "Enter Choice: ";
			cin >> choice;
			if(choice == 1){
				selection = "Strawberry & Nutella Crepe";
				price = 10.00;
			}else if(choice == 2){
				selection = "Strawberry & Chocolate Crepe";
				price = 12.00;
			}else if(choice == 3){
				selection = "Strawberry Waffel with Custard";
				price = 13.40;
			}else if(choice == 4){
				selection = "Strawberry Smoothie";
				price = 10.00;
			}else if(choice == 5){
				selection = "Strawberry & Country Cream";
				price = 13.00;
			}else{
				selection = "Not Avaliable";
				price = 0.00;
			}
		}

		string getSelection(){return selection;}

		double getPrice(){return price;}

};

class Customer{
	private:
		string strawSelect, name;
		double payment;
		Strawberry st;

	public:
		void set_data(){
			cout << "\n+++++++++++++++++STRAWBERRY SHOP++++++++++++++++++\n";
			cout << "Enter Name: ";
			cin >> name;
			getorder();
		}

		void getorder(){
			st.dispStrawberrySelection();
			st.purchase();
			payment = st.getPrice();
			strawSelect = st.getSelection();
		}

		void dispDetails(){
			cout << "........................................." << endl;
			cout << name << ", Your Purchase Details" << endl;
			cout << "........................................." << endl;
			cout << "Selection             : RM " << strawSelect << endl;
			cout << "Payment To Be Made    : RM " << payment << endl;
		}

};

int main(){
	Customer C;
	C.set_data();
	C.dispDetails();

	return 0;
}
