#include<iostream>
#include<cmath>
using std::cin;
using std::cout;
using std::endl;

class Point{ 
private:
	double px,py;	
public:
	Point()
	{
	px = 1; py = 1;
	}
	Point(double x,double y)
	{
	px = x; py = y;
	}
	
	double getx()
	{
		return px;
	}
	
	double gety()
	{
		return py;
	}

	void setx(double x)
	{
		px = x;
	}
	
	void sety(double y)
	{
		py = y;
	}

	void printPoint()
	{
		cout<< px << ","<<py<<endl;
	}
	
	double distance(Point point2)
	{
		return sqrt(pow(px - point2.getx(),2) + pow(py - point2.gety(),2));
	}
	
};

double distance2(Point point1, Point point2)
{
	return sqrt(pow(point1.getx() - point2.getx(),2)+pow(point1.gety() - point2.gety(),2));
};

int main(){
 Point p1;
 p1.printPoint();

 Point p2(3.5,7.8);
 p2.printPoint();
 
 cout<<p1.distance(p2)<<endl;
}
