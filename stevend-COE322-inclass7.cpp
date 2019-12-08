#include<iostream>
#include<cmath>
using std::cin;
using std::cout;
using std::endl;

struct tri{ float a; float b; float c; float A; float B; float C = 90;};

int main()
{
 tri one;
 tri two;
 one.a = 3;
 one.b = 4;
 two.a = 5;
 two.b = 12;
 one.c = sqrt(pow(one.a,2) + pow(one.b,2));
 two.c = sqrt(pow(two.a,2) + pow(two.b,2));
 one.A = atan(one.a/one.b)*(180/M_PI);
 one.B = one.C - one.A;
 two.A = atan(two.a/two.b)*(180/M_PI);
 two.B = two.C - two.A;
 cout<<"The hypotenuse for triangle one is "<<one.c<<endl;
 cout<<"Angle A for triangle one is "<<one.A<<endl;
 cout<<"Angle B for triangle one is "<<one.B<<endl;
 cout<<"The hypotenuse for triangle two is "<<two.c<<endl;
 cout<<"Angle A for triangle two is "<<two.A<<endl;
 cout<<"Angle B for triangle two is "<<two.B<<endl;
}
