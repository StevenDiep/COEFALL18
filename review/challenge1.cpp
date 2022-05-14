#include <iostream>
#include<math.h>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	int a;
	float b;
	cout<<"Enter side a value"<<endl;
	cin>>a;
	cout<<"Enter side b value"<<endl;
	cin>>b;

	cout<<"With a side a of "<<a<< " and a side b of "<<b<<endl;
	cout<<"The hypotenuse is = "<<sqrt(pow(a,2) + pow(b,2))<<endl;
	cout<<"The angle 1 is = "<<atan(a/b) * 180/M_PI<< endl;
	cout<<"The angle 2 is = "<<atan(b/a) * 180/M_PI<< endl;
}
