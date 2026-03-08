#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name, department, position;
    int idNumber;

public:
    // Default constructor
    Employee() : name(""), idNumber(0), department(""), position("") {}

    // Constructor 1: Takes all parameters
    Employee(string n, int id, string dept, string pos) 
        : name(n), idNumber(id), department(dept), position(pos) {}

    // Constructor 2: Takes name and id, sets others to default
    Employee(string n, int id) 
        : name(n), idNumber(id), department(""), position("") {}

    // Mutator functions to set the member variables
    void setName(string n) { name = n; }
    void setID(int id) { idNumber = id; }
    void setDepartment(string dept) { department = dept; }
    void setPosition(string pos) { position = pos; }

    // Accessor functions to get the member variables
    string getName() const { return name; }
    int getID() const { return idNumber; }
    string getDepartment() const { return department; }
    string getPosition() const { return position; }
};

int main() {
    // Create employee objects using different constructors
    Employee emp1("Susan Meyers", 47899, "Accounting", "Vice President");
    Employee emp2("Mark Jones", 39119, "IT", "Programmer");
    Employee emp3("Joy Rogers", 81774, "Manufacturing", "Engineer");

    // Display employee details
    cout << "Name: " << emp1.getName() << endl;
    cout << "ID Number: " << emp1.getID() << endl;
    cout << "Department: " << emp1.getDepartment() << endl;
    cout << "Position: " << emp1.getPosition() << endl;

    cout << "\nName: " << emp2.getName() << endl;
    cout << "ID Number: " << emp2.getID() << endl;
    cout << "Department: " << emp2.getDepartment() << endl;
    cout << "Position: " << emp2.getPosition() << endl;

    cout << "\nName: " << emp3.getName() << endl;
    cout << "ID Number: " << emp3.getID() << endl;
    cout << "Department: " << emp3.getDepartment() << endl;
    cout << "Position: " << emp3.getPosition() << endl;

    return 0;
}
