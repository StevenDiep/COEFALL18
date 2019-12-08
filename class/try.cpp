#include<iostream>
using std::cin;
using std::cout;
using std::endl;

class Rectangle {
private: // This is only viewable within the object!
  double l,h;
public:  // This is available to public - anything outside of this class!
  Rectangle(){ //default constructor
  }
  Rectangle( double length,double height ) {  //secondary constructor
    length = l; height = h;
  };
  double getlength() { return l; }; // accessor
  double getheight() { return h; };
  void setlength(double length) { l = length; }
  void setheight(double height) { h = height; }
  double area() { return l*h;}
  double perimeter() { return 2*(l+h); }
  
  int printSummary() 
  {
     cout<<"Rectangle summary: "<<endl;
     cout<<"Length: "<<l<<endl;
     cout<<"Height: "<<h<<endl;
     cout<<"Area: "<<area()<<endl;
     cout<<"Perimeter: "<<perimeter()<<endl;
  }
};

int main() {
   Rectangle myR(2,5);
   Rectangle mySquare(2, 2);
   myR.printSummary();
}
