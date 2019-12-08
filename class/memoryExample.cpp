#include<iostream>
using std::cin;
using std::cout;
using std::endl;

int main(){
int i = 5;
int* addr = &i;
cout<<"enter the arraysize:"<<endl;
cin>>i;
float* myArray;
myArray = (float*)malloc(i*sizeof(float));

for (int j = 0; j<i;j++)
{
 myArray[j] = j*2;
}
cout<<"value of i: "<<i<<endl;
cout<<"memory address of i: "<<&i<<endl;
cout<<"pointer to i: "<<addr<<endl;
cout<<"Whats at address of addr? "<<*addr<<endl;
cout<<sizeof(myArray)<<endl;
cout<<"my array starts at "<<myArray<<endl;
return 0;
}
