#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node *next;
};Node *head,*tail;
class LinkedList
{
	public:
		int count=0;
		LinkedList()
		{
			head=NULL;
			tail=NULL;
		}
		void Input(int x)
		{
			Node *temp=new Node;
			temp->data=x;
			temp->next=NULL;
			if(head==NULL)
			{
				head=temp;
				tail=temp;
			}
			else
			{
				tail->next=temp;
				tail=tail->next;
			}
		}
		int Size(Node *p)
		{
			if(p==NULL)
			{
				return count;
			}
			else
			{
				count++;
				return Size(p=p->next);
			}	
		}
		
};
main()
{
	LinkedList l1;
	l1.Input(10);
	l1.Input(15);
	l1.Input(20);
	l1.Input(25);
	l1.Input(30);
	cout<<l1.Size(head);
}
