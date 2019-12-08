#include<iostream>
using std::cin;
using std::cout;
using std::endl;

struct node{
	int val;
	node* next;
};

int main()
{
	node* head;
	node* second;
 	node* third;
	
	head = (node*)malloc(sizeof(node));
	second = (node*)malloc(sizeof(node));
	third = (node*)malloc(sizeof(node));

	(*head).val = 1;
	(*head).next = second;
	
	(*second).val = 2;
	(*second).next = third;

	(*third).val = 3;
	(*third).next = NULL;	

	node* cur;

	cur = had;
	cout<<(*head).val<<endl;

	cur = (*cur).next;
}
