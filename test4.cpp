#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;
};

Node* head;



void Insert(int x)   //Insert at the beginning........
{
	Node* newNode=new Node();
	newNode->data=x;
	newNode->next=head;
	head=newNode;
}


void InsertNodeTail(int x)   //Insert at the tail....
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


void InsertAtPos(int x,int pos)
{
	Node* curr=new Node();
	Node* prev=new Node();
	Node* newNode=new Node();
	newNode->data=x;
	curr=head;
	int tempos=0;
	if(head!=NULL)
	{
		while(curr->next!=NULL &&tempos!=pos)
		{
			prev=curr;
			curr=curr->next;
			tempos++;
		} //whole while loop traverse to find the current position

		if(pos==0)
		{
			Insert(x);//addding the node at head
		}

		else if(curr->next==NULL && pos==tempos+1)
		{
			curr->next=newNode;
			newNode->next=NULL;//adding the node at the tail
		}

		else if(tempos+1<pos) //out of bound
		{
			cout<<"The position is out of bound"<<endl;
		}

		else
		{
			prev->next=newNode;
			newNode->next=curr;
		}
	}

	else
	{
		head=newNode;
		newNode->next=NULL;
	}
}

void Delete(int pos)
{
	Node* prev=head;
	if(pos==0)
	{
		head=prev->next;
		delete prev;
		return;	
	}
	
	for(int i=0;i<pos-1;i++)
	{
		prev=prev->next;
	}
	Node* curr=prev->next;
	prev->next=curr->next;
	delete curr;
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

void Sum()
{
	int sum=0;
	Node* temp=head;
	while(temp!=NULL)
	{
		sum+=temp->data;
		temp=temp->next;
	}
	cout<<"The sum of list is "<<sum<<endl;
}

void printListSize()
{
	int size=0;
	Node* temp=head;
	while(temp!=NULL)
	{
		size++;
		temp=temp->next;
	}

	cout<<"The size of the list is "<<size<<endl;
}

int main()
{
	head=NULL;
	int numbers;
	cout<<"How many numbers do you want to enter: "<<endl;
	cin>>numbers;
	for (int i=0;i<numbers;i++)
	{
		int x;
		cout<<"Enter a num: "<<endl;
		cin>>x;
		Insert(x);
	}
	Print();
	Sum();
	printListSize();
	/**cout<<"Now inserting 1000 at position 7"<<endl;
	cout<<"......................................."<<endl;
	InsertAtPos(1000,7);
	cout<<"After insertion............"<<endl;
	Print();**/

	Delete(0);
	cout<<"After delete pos 0"<<endl;
	Print();
	return 0;
}
