//Chapter 3: Classes and Objects

#include <iostream>
using namespace std;

int main(){
	/* Part 1.1: Class Basics

	What is a class? : it is a blueprint for creating objects which contains
	- Data Members (variables)
	- Member Functions (methods)
	*/

	class Rectangle{
		private:
			int width, height;
		public:
			void setValues(int w, int h){ //Mutator
				width = w;
				height = h;
			}
			int calcArea() {return width * height;} //Accessor
	};

	/* Part 1.2: Objects = Instances of a Class
	- Declare an object
	- Access members: Using the (.) operator
	*/

	rect.setValues(5, 10);
	cout << rect.calcArea();

	/* Part 1.3: Access Specifiers
	- private: Accessible only within the class (default)
	- public: Accessible anywhere

	key idea:
	- use private for data hiding (security)
	- use public for methods to interace with the object
	*/

	/* Part 1.4: Mutators and Accessors
	- Mutator (set functions): modify the private data
	*/
	void setWidth(int w) {width = w;}

	/* Part 1.4 cont.
	- Accessor (get Function): read private data
	*/
	int getWidth() {return width;}

	/* Part 2.1: Advanced concepts
	- Defining member functions outside the class (use the :: operator)
	*/
	class Square {
		public:
			void setValues(int W, int H);
	};

	void Square::setValues(int W, int H){
		Width = W;
		Height = H
	}

	/* Part 2.2: Array of objects*/
	Rectangle rects[3];
	for (int i = 0; i < 3; i++){
		rects[i].setValues(i+1, i+2);
		cout << rects[i].calcArea() << endl;
	}

	/* Part 2.3: Passing objects to functions
	a) by value (Copy)*/

	void printArea(Rectangle *r){
		cout << r.calcArea();
	}

	// b) By refrence (pointer)
	void doubleWidth(Rectangle *r){
		r->setWidth(r->getWidth() * w);
	}

	// c) By refrence (Alias)
	void doubleWidth(Rectangle &r){
		r.setWidth(r.getWidth() * 2);
	}


	return 0;
}












