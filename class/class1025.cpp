#include<iostream>
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

vector<float> makeVector(int size, float value)
{
	vector<float>x(size,value);
	return x; 
}

int printVector(vector<float> Vector1)
{
	for (auto i: Vector1)
	{
		cout<<i<<endl;
	}
	cout<<Vector1.size()<endl;
	return 0;
}
int resetVectorToZero(vector<float> &Vector2)
{
	for (auto &i:Vector2)
	i = 0;
}
 
int main(){
vector<float> myVector = makeVector(10,1.5);
printVector(myVector);
resetVectorToZero(myVector);
printVector(myVector);
for (auto i : myVector)
{
	cout<<i<<endl;
}
}
