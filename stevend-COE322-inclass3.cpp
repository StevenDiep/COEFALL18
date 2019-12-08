// Program Name: Hello World
#include <iostream>
#include <cmath>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

float hyp (float a, float b);
float angleA (float a, float b);
float angleB (float a, float b);

int main () {
	float a;
	float b;
	cout << "Enter side a value: ";
	cin >> a;
	cout << "Enter side b value: ";
	cin >> b;
	cout<< "With a side a of "<< a <<" and a side b of "<< b <<endl;
 	float c = hyp(a,b);
	cout<<"The hypotenuse is = " << c << endl;
	double A = angleA(a,b);
	double B = angleB(a,b);
	cout<<"The angle 1 is = "<< A <<endl;
	cout<< "The angle 2 is = "<< B << endl;
	}

float hyp (float a, float b)
{
	float c; 
	c = sqrt(pow(a,2) + pow(b,2));
	return c;
}

float angleA (float a, float b)
{
	float A;
	A = atan(a/b)*(180/M_PI);
	return A;
}

float angleB (float a,float b)
{
	float B;
	B = atan(b/a)*(180/M_PI);
	return B;
}
