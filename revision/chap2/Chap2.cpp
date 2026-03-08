//Chapter 2: Fundamentals of c++

#include <iostream>
using namespace std;

int main(){
	//Part 1
	int yes;

	cout << "Hello" << endl
	cin >> yes;
	cout << yes;

	if(yes == 1){cout << "You are a winner" << endl;}
	else{cout << "AHAHAHAHA YOUR A FUCKING LOOSER" << endl;}

	//Part 2

	//while loop: checking the condition first
	int i = 1;
	while (i <= 5){
		cout << "Loop" << i << endl;
		i++;
	}

	//do-while: Execute first then check condition
	int j = 1;
	do{
		cout << "Loop" << j << endl;
	}while (j <= 5);

	//for: compact counter
	for(int k = 1; k <= 5; k++){
		cout << "Loop" << k << endl;
	}

	//Arrays:
	int triathalonScore[15]
	for(int i = 0; i < i < 15; i++){
		cin >> triathalonScore[i];
	}

	//Pointers:
	int num[7] = {1, 2, 3, 8, 11, 10, 14};
	int *p = num; // p points to num[0]
	cout << p[3]; // Output: 8(same as num[3])

	//Character Arrays VS String Type:
	string safeMessage;
	getline(cin, safeMessage);
	cout << safeMessage << endl;

	//2d Arrays:
	int grid[3][5] = {
		{1, 2, 3, 4, 5},
		{6, 7, 8, 9, 10}'
		{11, 12, 13, 14, 15}
	};

	cout << grid[1][2];

	//Part 3: Functions
	//Function Definitions
	int makeBurger(int patties){
		return patties + 1;
	}

	//Call the function
	int myBurger = makeBurger(2);

	//Parameter Passing: Call by value vs refrence
	//call by value
	void addSalt(int salt){salt += 10;}

	//call by refrence (uses pointers)
	void AddSalt(int *Salt){*Salt += 10;}
	AddSalt(&saltAmount);

	//Refrence Arguments (&) Easier pointers
	void addSugar(int &sugar){sugar += 5;}
	addSugar(sugarAmount);

	

return 0;

}


