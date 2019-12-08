#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

class Person{
	//i is the number of sick days left
	private:int status; int stable; int i;
	public:
	Person(){status = 0;stable = 0;i = -1;}

	int status_string(){
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
	double get_i() {return i;};
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

	int pop_status(){
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
	
	void probability_of_transfer(float prob,float rand) { 
	  for (int i = 0; i<population.size(); i++)
	    //Sick people can't infect others if they just got sick
	    if (population[i].get_status() == 1 && population[i].get_i() != 5)
	    {
	      if (rand < prob)
	      {
	       population[(i-1+population.size())%population.size()].infect(5);
	       population[(i+1+population.size())%population.size()].infect(5);
	      }
	    }
	};
	
	void pop_inoculation(float percentage){
	  int goal = population.size() * percentage;
	  int counter = 0;
	  while (counter<goal)
	  {
	    float random_person = ((float) rand()/ RAND_MAX) * population.size();
	    if (population[random_person].get_status() != 3 &&
population[random_person].get_status() != 1)
	    {
	      population[random_person].inoculate();
	      counter =  counter + 1;
	    }
	  }
	};
	
	int count_inoculated(){
	  int counter = 0;
	  for (int i = 0; i<population.size(); i++)
	  {
	    if (population[i].get_status() == 3)
	    {
	      counter = counter + 1;
	    }
	  }
	  return counter;
	};

	void random_interactions(int ninteractions){
	  for (int i = 0; i< population.size();i++)
	  {
	    if (population[i].get_status() == 1 && population[i].get_i() != 5)
	    {
	      int counter = 0;
	      while (counter < ninteractions)
	      {
	        float random_person = ((float) rand()/ RAND_MAX ) *(population.size()-1) ;
		if (random_person != i)
	        {
		  population[random_person].infect(5);
	          counter = counter + 1;
	        }
	      }
	    }
	  }
	};
};		
	    
 
int main(){
	Population room(30);
	int counter = 1;
	room.random_infect();
	while (1)
	{ 
	  float random = ((float)rand() / RAND_MAX);
  	  cout<<"In day "<<counter<<" # sick:"<<room.count_infected()
<<": "<<room.pop_status()<<endl;
	  if (room.count_infected() == 0)
	  {
	    break;
	  }
	  room.updatepop();
	  room.random_interactions(2);
	  counter = counter + 1;
	}
}   

 






