#include <iostream>
using namespace std;
class Node
{
	public:
		int data;
		Node *next;
	Node()
	{
		data=NULL;
		next=NULL;
	}
	Node(int x)
	{
		data=x;
		next=NULL;
	}
	Node(int x,Node *p)
	{
		data=x;
		next=p;
	}
};
class Stack
{
	public:
		Node *top,*end;
	Stack()
	{
		top=NULL;
		end=NULL;
	}
	int Empty()
	{	
		if (top==NULL)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	bool Push(int x)
	{
		if(this->Empty()==true)
		{
			top=new Node(x,NULL);
			end=top;
		}
		else
		{
			top=new Node(x,top);
		}
	}
	int Pop()
	{
		if(this->Empty()==true)
		{
			return false;
		}
		else
		{
			Node *p=top;
			top=top->next;
			delete p;
		}
	}
	bool Peek()
	{
		if(this->Empty()==true)
		{
			cout<<"Stack Underflow";
		}
		else
		{
			return top->data;
		}
	}
	void Reverse(Stack &ob)
	{
		if(ob.Empty()!=true)
		{
			while(ob.Empty()!=true)
			{
			    ob.Pop();
			}
		}
		while(Empty()!=true)
		{
			ob.Push(Peek());
			Pop();
		}
	}
};
main()
{
	Stack stack1,stack2,stack3;	
	stack1.Push(10);
	stack1.Push(45);
	stack1.Push(57);
	stack1.Push(112);
	stack1.Push(1);
	stack1.Reverse(stack2);
	stack2.Reverse(stack3);
	stack3.Reverse(stack1);
	while(stack1.Empty()!=true)
	{
		cout<<stack1.Peek()<<" ";
		stack1.Pop();
	}
}
