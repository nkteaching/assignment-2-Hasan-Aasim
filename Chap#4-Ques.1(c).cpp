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
	void Reverse(Stack &ob,int num)
	{
		static int count=0;
		if(count==num)
		{
			return;
		}
		else
		{
		int temp=ob.Peek();
		ob.Pop();
		int i=0;
		while(i<num-1)
		{
		    Push(ob.Peek());
		    ob.Pop();
		    i++;
		}
		ob.Push(temp);
		while(!Empty())
		{
			ob.Push(Peek());
			Pop();
		}
		num--;
		Reverse(ob,num);
		   }
	}
};
main()
{
	Stack stack1,stack2;
	stack1.Push(21);
	stack1.Push(23);
	stack1.Push(12);
	stack1.Push(100);
	stack1.Push(1);
	stack2.Reverse(stack1,5);
	cout<<"After Reversing The Stack:"<<endl;
	while(!stack1.Empty())
	{
		cout<<stack1.Peek()<<endl;
		stack1.Pop();
	}
}
