#include<iostream>
using std::cin;
using std::cout;
using std::endl;

struct myStruct{
	int number;
	int*numPointer;
};

int main()
{
	int n = 500;
	int* iPointer;
	
	iPointer = &n;
	cout<<"Value of n "<<n<<endl;
	cout<<"Memory address of n is "<<&n<<endl;
	cout<<endl;
	cout<<"Memory address of where the pointer is pointing to "<<iPointer<<endl;
	cout<<"The value of where the pointer is pointing to is "<<*iPointer<<endl;
	cout<<"The memory address of the pointer is "<<&iPointer<<endl;

	myStruct customStruct;
	customStruct.number = 600;
	customStruct.numPointer = &n;

	myStruct* pointerToStructure;

	pointerToStructure = &customStruct;
	cout<<"Pointer to structure value is "<<*pointerToStructure<<endl;
}
