#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main(){
vector<int> array(0);
int r = 0;
while (r != 42)
{
	r = 100. * rand()/RAND_MAX;
	array.push_back(r);
	cout<<r<<endl;
}
cout<<"Array size is "<<array.size()<<endl;
}
