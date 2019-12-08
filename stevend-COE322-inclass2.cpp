#include <iostream>
using std::cout;
using std::endl;
#include <time.h>
int main () {
	srand (time(NULL));
	int rand();
	int heads = 0;
	int tails = 0;
	int i = 0;
	for (i = 0; i<1000000; i++){
	int random_number = rand();
	if (random_number%2 == 0) {
		heads = heads +1;
	}
	else {	
		tails = tails + 1;
	
	}
				}
	cout<<"The total amount of heads is: " <<heads<<endl;
	cout<<"The total number of tails is :"<<tails<<endl;
}		
