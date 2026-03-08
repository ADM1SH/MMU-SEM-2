#include <iostream>
using namespace std;

class cuboid{
    int length, width, height, volume;

    public:
        void setdata(){
            cout << "enter the length, width, height and volume: " << endl;
            cin >> length >> width >> height;
        }
        void findVolume(){
            volume = length * width * height;
        }
        void display(){
            cout << endl << "------Display Cuboid Data-----" << endl;
            cout << "Width : " << width << endl;
            cout << "length: " << length << endl;
            cout << "height: " << height << endl;
            cout << "volume: " << volume << " cm^3" << endl;
        }

};

int main(){
   cuboid q;
   q.setdata();
   q.findVolume();
   q.display();
   
    return 0;
}