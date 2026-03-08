#include <iostream>
using namespace std;

class Fraction{
	private:
		int nume, denom;
	public:
		void setData(int n, int d){
			nume=n;
			denom=d;
		}

		int getNume() const {return nume;}

		int getDenom() const {return denom;}
};

int isValid(fraction ob){
	int valid;

	if (ob.getDenom()==0){
		valid = 0;
		cout << "\nAlert: Denominator is having value zero" << endl;
	} else if (ob.getNume()>ob.getDenom()){
		valid = 0;
		cout << "\nAlert: Numarator greater then denominator" << endl;
	} else
		valid = 1;
	return valid;
}

int main(){
	fraction ob1[3];

	for (int i=0; i<3; i++){
		ob1[i].setData(i+1,2-i);

		cout << "\nFraction " << ob1[i].getNume() << "/" << ob1[i].getDenom << endl;

		if (isValid(ob1[i]) == 1;){cout << "is valid" << endl;}
		else {cout << "is invalid" << endl;}
	}
	return 0;
}

