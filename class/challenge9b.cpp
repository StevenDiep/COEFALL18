#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

vector<int> random_vector(int num){
vector<int> random(0);
for (int i = 0; i<num ; i++)
{
  random.push_back(100.* rand()/RAND_MAX);
}
return random;
}

void sort(vector<int> &random){
int counter = 0;
while (1)
{
  counter = 0;
  for (int i = 0; i<(random.size() - 1);i++)
    {
      if (random[i] > random[i+1])
        {
	  random[i] = random[i+1], random[i+1] = random[i];
	  counter = counter + 1;
	}
      else
	{
	  random[i] = random[i];
	  random[i+1] = random[i+1];
	}
    }
  if (counter == 0)
    {
      break;
    }  
}
}

int main(){
int length = 10;
vector<int> values = random_vector(length);
sort(values);
cout<<values[0]<<endl;
cout<<values[1]<<endl;
cout<<values[2]<<endl;
cout<<values[3]<<endl;
cout<<values[4]<<endl;
cout<<values[5]<<endl;
cout<<values[6]<<endl;
cout<<values[7]<<endl;
cout<<values[8]<<endl;
cout<<values[9]<<endl;
}


