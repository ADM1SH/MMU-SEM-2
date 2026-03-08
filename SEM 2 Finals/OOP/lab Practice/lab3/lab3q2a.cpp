#include <iostream>
using namespace std;

class Cuboid{ 
    int length, width, height, volume;
    public:
        void setdata();
        void findVolume();
        void display();
};


void Cuboid::setdata() {
    cout << "Enter length: "; cin >> length;
    cout << "Enter width : "; cin >> width;
    cout << "Enter height: "; cin >> height;
}

void Cuboid::findVolume() {
    volume = length * width * height;
}

void Cuboid::display() {
    cout << "The volume of the cuboid is: " << volume << endl;
}

int main(){ 
    Cuboid Q;
    Q.setdata();
    Q.findVolume();
    Q.display();
    return 0;
}