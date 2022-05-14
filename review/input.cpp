#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string name;
	cout<<"Give me a name"<<endl;
	getline(cin, name);
	cout<<"Hello "<<name<<20<<endl;
}
