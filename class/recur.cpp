#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int recurse(int i)
{
	if (i==0)
	{
		return 0;
	}
	else
	{
		return i + recurse(i-1);
	}
}
int main(){

int sum = 0;
sum = recurse(100);
cout<<sum<<endl;
}


