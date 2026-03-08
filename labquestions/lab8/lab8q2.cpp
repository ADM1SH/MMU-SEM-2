#include <iostream>
#include <cmath>
using namespace std;

class Geometry{
        private:
                float pi, height, radius;
        public:
                Geometry(float hg, float rd){
                        pi = M_PI;
                        height = hg;
                        radius = rd;
                }

                ~Geometry(){cout << "==========END OF PROGRAM===========" << endl;}

                friend class Cylinder;
                friend class Cone;
};

class Cylinder{
        private:
                float vol;
        public:
                void calc_vol(Geometry *g) {
                        vol = g-> pi * pow(g-> radius, 2) * g-> height;
                        cout << "Volume of cylinder with height: " << g->height << " and radius: " << g->radius << " is " << vol << endl;
                }
};

class Cone{
        private:
                float vol;
        public:
                void calc_vol(Geometry &g) {
                        vol = (g.pi * pow(g.radius, 2) * g.height) / 3;
                        cout << "Volume of cylinder with height: " << g.height << " and radius: " << g.radius << " is " << vol << endl;
                }
};

class Cube{

};

int main(){
        float hg, rd;
        cout << "Enter height: ";
        cin >> hg;
        cout << "Enter radius: ";
        cin >> rd;

        Geometry gmt(hg, rd);
        Cylinder cyc;
        cyc.calc_vol(&gmt);
        Cone cn;
        cn.calc_vol(gmt);

        return 0;
}
