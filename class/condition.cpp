#include<iostream>
using std::cin;
using std::cout;
using std::endl;
int main () {
	srand(time(NULL));
	int rand();
	int random_number = rand();
	if (random_number%2 == 0) {
	cout<< "You got heads "<< endl;
	}
	else {
	cout<< "You got tails"<<endl;
	}
}
