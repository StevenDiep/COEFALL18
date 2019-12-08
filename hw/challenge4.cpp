// Program Name: Hello World
#include <iostream>
#include <cmath>
#include <string>
using std::cin;
using std::cout;
using std::endl;

float triangle(float &a, float &b, float &c, float &A, float &B)
	{
	c = sqrt(pow(a,2)+pow(b,2));
	A = atan(a/b)*(180/M_PI);
	B = atan(b/a)*(180/M_PI);
}
int main () {
	float a;
	float b;
	float c = 0;
	float A = 0;
	float B = 0;
	cout << "Enter side a value: ";
	cin >> a;
	cout << "Enter side b value: ";
	cin >> b;
	triangle(a,b,c,A,B);
	cout<< "With a side a of "<< a <<" and a side b of "<< b <<endl;
 	cout<<"The hypotenuse is = "<<c<<endl;
	cout<<"The angle 1 is = "<<A<<endl;
	cout<<"The angle 2 is = "<<B<<endl;
}
