#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main(){
vector<int> myVector = {4,7,3,2,1};
vector<int> myVector2 (3,5);
vector<int> myVector3(5);

vector<float> R(10,5);
vector<vector<float>>N(5,R);

cout<<"N contains: "<<endl;
for (auto Row :N)
{
	for ( auto z: Row)
	{
		cout<<z<<" ";
	}
}
cout<<endl;

cout<<"My vector contains "<<endl;

for (auto &i: myVector)
{
  cout<<i<<endl;
  i = 5;
}
cout<<"My vector contains "<<endl;
for(auto i: myVector)
{
cout<<i<<endl;
}
}
