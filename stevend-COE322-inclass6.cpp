#include<iostream>
using std::cin;
using std::cout;
using std::endl;

int fib(int i)
{
	if (i == 0)
		return 1;
	if (i == 1)
		return 1;
	else 
		return fib(i-1) + fib(i-2);
}

int main()
{
int i;
cout<<"Please enter a value for the Fibonnaci number you want to see "<<endl;
cin>>i;
int total = fib(i);
cout<<"The fibonacci number at value "<<i<<" is "<<total<<endl;
int j;
cout<<"How many Fibonnacci numbers would you like to see?"<<endl;
cin>>j;
cout<<"The sequence of numbers for "<<j<<" iterations is "<<endl;
for(int k = 0;k<=j;k++)
	{
		int current = fib(k);
		cout<<"F("<<k<<") = "<<current<<endl;
	}
}
