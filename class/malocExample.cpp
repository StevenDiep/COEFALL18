#include<iostream>
using std::cin;
using std::cout;
using std::endl;

struct roomTemp {
	float x = 0;
	float y = 0;
	float z = 0;
	float temp = 0;

	roomTemp*  nextTemp;
};
int main()
{

	int t = 100;
	int i;
	roomTemp*rt;
	cout<<"Headnode: "<<rt<<endl;
	for (int i = 0;i<t;i++)
	{
		rt = (roomTemp*)malloc(sizeof(roomTemp));
		cout<< rt<<endl;
	}
}
