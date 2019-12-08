#include <iostream>
#include<cmath>

using std::cin;
using std::cout;
using std::endl;

class Point{
    private:
        float xcoor; float ycoor;
    public:
	Point() {xcoor = 1; ycoor = 1;}
        Point(float x,float y) { xcoor = x; ycoor = y;};
        float getx() {return xcoor;};
        float gety() {return ycoor;};
	void setx(double x) {xcoor = x;};
	void sety(double y) {ycoor = y;};
        void printout() {
            cout<<xcoor<<endl;
            cout<<ycoor<<endl;
        };
        float distanceToOrigin() {return sqrt(pow(xcoor,2) + pow(ycoor,2));};
        float distance(Point p2) {return sqrt(pow(p2.gety()-ycoor,2)+pow(p2.getx()-xcoor,2));};
};

class Line{
private:
    Point p1; Point p2;
public:
    Line(double x1,double y1,double x2,double y2) {p1.setx(x1);p1.sety(y1);
	p2.setx(x2);p2.sety(y2);};
    void setp1(double x1, double y1) {p1.setx(x1);p1.sety(y1);};
    void setp2(double x2, double y2) {p2.setx(x2); p2.sety(y2);};   
    void printout() { 
	cout<<"First point is "<<p1.getx()<<","<<p1.gety()<<endl;
	cout<<"Second point is "<<p2.getx()<<","<<p2.gety()<<endl;
	};
    Point midpoint(){
	double x = (p1.getx()+p2.getx())/2;
	double y = (p1.gety()+p2.gety())/2;
	Point mp(x,y);
	return mp;
	};
    
};

int main() {
    Line l1(2,3,4,6);
    Point p3 = l1.midpoint();
    l1.printout();
    cout<<"Mid point is "<< p3.getx()<<","<<p3.gety()<<endl;
}

