#include<iostream>
using std::cin;
using std::cout;
using std::endl;

class Rectangle {
protected: // This is only viewable within the object!
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

class Square : public Rectangle
{
   public:
      Square() { };
      Square(double side) : Rectangle(side,side) { } ;
      void setlength(double side)
      { l = side; h = side; };
};
int main(){
Rectangle myR(20,30);
myR.printSummary();
Square s1(100);
s1.printSummary();

Square myS2;
myS2.setlength(100);
myS2.printSummary();
   
}
