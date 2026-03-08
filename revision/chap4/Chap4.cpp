//Chapter 4: Constructors, Destructors and Friends

#include <iostream>
using namespace std;

/* Part 4.1: Constructors and Destructors
	What is a constructor?
-A special methos that runs automatically when an object is created. it
	- initalize object data
	- allocates memory
	- no return type (not even void)
*/

class Student {
	private:
		string name;
	public:
		Student(){
			name = "Unknown";
		}
};

/* Part 4.2: Type of constructors
- a) Default constructor
	- No parameters
	- Runs if no other constructor is defined
*/

Student() {name = "Unknown";}


/* -b) Parameterised Constructor
	- Takes arguments to set initial values */

Student(string n) {name = n;}

/* -c) Constructor with initialization list
	-More efficient (directly assigns values) */

Student(string n) : name(n) {}

/* -d) Copy constructor
- Creates a copy of an existing object */

Student(const Student &s) {name = s.name;}

/* Part 4.3: Destructors
	- Automatically called when an onject is destroyed (e.g, program ends)
	- Name: ~ClassName() (prefix with ~)
	- Purpose: Free memory (e.g, close files, release pointers)
*/

class Student{
	public:
		~Student(){
			cout << "object destroyed" << endl;
		}
}

/* Part 4.3: Friends
	-grant access to private/protected members of a class
	- not a mmember function but declared inside the class with friend
a) friend funcyion */

class BankAccount {
	private:
		double balance;
	public:
		friend void printBalance(BankAccount acc);  // Declare friend
};

void printBalance(BankAccount acc) {
	cout << acc.balance;  // Access private data!
}

// b) friend class
class Admin {
	friend class Auditor;  // Auditor can access Admin's privates  

	private:
		string password;  
};
