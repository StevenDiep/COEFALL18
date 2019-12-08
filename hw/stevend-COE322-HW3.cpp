#include<iostream>
#include<cmath>

using std::cin;
using std::cout;
using std::endl;

class Triangle{
private:
	float a; float b;
public:
	//Constructors and accessors
	Triangle() {a = 2; b =  3;};
	Triangle(float s1,float s2) {a = s1; b = s2;}
	float geta() {return a;};
	float getb() {return b;};
	//Methods
	void seta(float s1) {a = s1;};
	void setb(float s2) {b = s2;};
	float hyp() {return sqrt(pow(a,2)+ pow(b,2));};
	float angleA() {return atan(a/b)*180/M_PI;};
	float angleB() {return atan(b/a)*180/M_PI;};
	
	void printout() {
	cout<<"Side a is "<<a<<endl;
	cout<<"Side b is "<<b<<endl;
	cout<<"The hypotenuse is "<<hyp()<<endl;
	cout<<"Angle A is "<<angleA()<<endl;
	cout<<"Angle B is "<<angleB()<<endl;
	};
};

int main(){
Triangle one(3,4);
Triangle two(5,12);
cout<<"Triangle one has values: "<<endl;
one.printout();
cout<<"Triangle two has values: "<<endl;
two.printout();
}

