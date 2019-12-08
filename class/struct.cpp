#include<iostream>
#include<cmath>
using std::cin;
using std::cout;
using std::endl;

struct coord{int x;int y;};

int main(){
coord pointOne;
coord pointTwo;
pointOne.x = 3;
pointOne.y = 4;
pointTwo.x = 2;
pointTwo.y = 2;
int dist = sqrt(pow(pointTwo.x-pointOne.x,2)+pow(pointTwo.y-pointOne.y,2));
cout<<dist<<endl;
}
