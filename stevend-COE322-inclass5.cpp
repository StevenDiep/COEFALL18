//Enter 100 to see the first 100 sum of squares
#include<iostream>
using std::cin;
using std::cout;
using std::endl;

int sumSquares(int i)
{
	if (i == 0)
		return 0;
	else
		return (i*i) + sumSquares(i-1);
}

int main()
{
	int i;
	cout<<"Please enter a number you would like to see the sum of squares to"<<endl;
	cin>> i;
	for(int j = 0; j<=i ; j++)
	{
		int total = sumSquares(j);
		cout<<"The sum of squares up to "<<j<<" is "<<total<<endl;
	}
}
