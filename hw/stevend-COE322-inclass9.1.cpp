#include <iostream>
#include<cmath>

using std::cin;
using std::cout;
using std::endl;

class Point{
    private:
        float xcoor; float ycoor;
    public:
        Point(float x,float y) { xcoor = x; ycoor = y;}
        float getx() {return xcoor;};
        float gety() {return ycoor;};
        void printout() {
            cout<<xcoor<<endl;
            cout<<ycoor<<endl;
        };
        float distanceToOrigin() {return sqrt(pow(xcoor,2) + pow(ycoor,2));};
        float distance(Point p2) {return sqrt(pow(p2.gety()-ycoor,2)+pow(p2.getx()-xcoor,2));};
};

int main() {
    Point p1(3,4);
    Point p2(6,8);
    p1.printout();
    cout<<"The distance from origin for p1(3,4) is "<<p1.distanceToOrigin()<<endl;
    cout<<"The distance is from p1(3,4) to p2(6,8) is  "<<p1.distance(p2)<<endl;
}

