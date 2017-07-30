#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;
};

Node* head; //global var can be accessed anywhere

void Insert(int x)
{
	Node* temp=new Node();
	temp->data=x;
	temp->next=head;
	head=temp;

}

void Print()
{
	Node* temp=head;
	cout<<"The List is: "<<endl;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
int main()
{
	head = NULL; //list is empty
	Insert(1);
	Insert(2);
	Insert(3);
	Insert(4);

	Print();
	return 0;
}