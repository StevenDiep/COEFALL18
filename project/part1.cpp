#include<iostream>

using std::cin;
using std::cout;
using std::endl;

class Person{
	private:int status; int stable; int i;
	public:
	Person(){status = 0;stable = 0;i = -1;}

	char status_string(){
	  if (status == 0)
 	    cout<<"Joe is susceptible"<<endl;
	  else if (status == 1)
	    cout<<"Joe is sick ("<<i<< " to go)"<<endl;
	  else if (status == 2)
	    cout<<"Joe is recovered"<<endl;
	  else if (status = 3)
	    cout<<"Joe is inoculated"<<endl;
	};

	void update(){
        if (i>0)
	 {
	  i--;
	 }
        if (i == 0 && status == 1)
	 {
          stable = 1;
	  status = 2;
 	 }
	};

	void infect(int n){
	  if (stable == 0)
	   {
	    status = 1;
	    i = n;
	   }
	};

	void is_stable(){
	if (stable == 1)
	  cout<<"Joe has been sick and is stable"<<endl;
	else 
	  cout<<"Joe has not been sick yet"<<endl;
	};
	
	void inoculate(){
	  status = 3;
	  stable = 1;
	};
	
	double get_stable() {return stable;};
};

int main(){
Person joe;
int counter;
counter = 0;
while (joe.get_stable() == 0)
 {
  joe.update();
  float bad_luck = (float) rand()/(float) RAND_MAX;
  if (bad_luck > .95)
   {
    joe.infect(5);
   }
  cout<<"On day " << counter<<", "<<joe.status_string()<<endl;
  counter = counter + 1;
 }
}   

 






