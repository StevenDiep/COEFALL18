#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

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
	  if (stable == 0 && status != 1)
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
	double get_status() {return status;};
};

class Population : public Person{
	private: 
	  vector<Person> population; int random;
	public:
	Population(int npeople) {
	  population = vector<Person>(npeople);
	  random = (((float) rand()/RAND_MAX) * (npeople-1));};

	void random_infect() { population[random].infect(5);};

	int count_infected() {
	  int counter = 0;
	  for (int i = 0; i < population.size();i++)
	    {
	      if (population[i].get_status() == 1)
	      {
		counter = counter + 1;
	      }
	    }
	  return counter;
	};

	void updatepop() {
	  for (int i = 0;i<population.size();i++)
	  {
	    population[i].update();
	  }
	};

	char pop_status(){
	  for (int i = 0; i<population.size();i++)
	   {
	    if (population[i].get_status() == 0)
	    {
	      cout<<"?"<<" ";
	    }
	    else if (population[i].get_status() == 1)
	    {
	      cout<<"+"<<" ";
	    }
	    else if (population[i].get_status() == 2 || population[i].get_status() == 3)
	    {
	      cout<<"-"<<" ";
	    }
	   }
	};  
};
 
int main(){
	Population room(10);
	int counter = 1;
	room.random_infect();
	while (1)
	{ 
  	  cout<<"In day "<<counter<<" # sick:"<<room.count_infected()
<<": "<<room.pop_status()<<endl;
	  counter = counter + 1;
	  if (room.count_infected() == 0)
	  {
	    break;
	  }
	  room.updatepop();
	}
}   

 






