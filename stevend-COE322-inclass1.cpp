// Program Name: Hello World
#include <iostream>
#include <cmath>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main () {
	float a;
	float b;
	float c;
	cout << "Enter side a value: ";
	cin >> a;
	cout << "Enter side b value: ";
	cin >> b;
	cout<< "With a side a of "<< a <<" and a side b of "<< b <<endl;
	c = sqrt( pow(a,2) + pow(b,2));
	cout<<"The hypotenuse is = " << c << endl;
	double A =  atan(a/b)*(180/M_PI);
	double B =  atan(b/a)*(180/M_PI);
	cout<<"The angle 1 is = "<< A <<endl;
	cout<< "The angle 2 is = "<< B << endl;
	}
