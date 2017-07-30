#include <iostream>
using namespace std;
struct Node {
	int data;
	Node* next;
};

Node* head;
void InsertNodeTail(int x)
{
	if(head!=NULL)
	{
	Node* newNode=new Node();
	Node* curr=new Node();
	newNode->data=x;
	curr=head;
	while(curr->next!=NULL)
	{
		curr=curr->next; //traverse to the tail the last node in list
	}
	curr->next=newNode;
	newNode->next=NULL;
   }
   else
   {
   	head=new Node();
   	head->data=x;
   	head->next=NULL;
   }
}

void Print()
{
	Node* temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}


int main()
{
	head=NULL;
	InsertNodeTail(1);
	InsertNodeTail(2);
	InsertNodeTail(3);
	Print();
	return 0;
}