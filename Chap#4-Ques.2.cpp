#include<iostream>
#define length 100
using namespace std;
class Stack
{
	int top;
	public:
		Stack()
		{
			top=-1;
		}
		int array[length];
		bool Push(int x);
		bool Pop(Stack &ob);
		bool ascending();
		bool PushNew();
		void Display();
};
bool Stack::Push(int x)
{
	if(top>(length+1))
	{
		return false;
	}
	else
	{
		array[++top]=x;
		return true;
	}
}
bool Stack::Pop(Stack &ob)
{
	if(top<=0)
	{
		return false;
	}
	else
	{
//		int x;
		for(int i=0;i<5;i++)
		{
		PushNew(array[--top]);
		}
	}
}
bool Stack::ascending()
{
	for(int i=0;i<(top+1);i++)
	{
		for(int j=0;j<(top+1-i);j--)
		{
			int temp;
			if(array[j]>array[j=1])
			{
				int temp;
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
}
void Stack::Display()
{
	for(int i=0;i<5;i++)
	{
		cout<<array[i]<<" ";
	}
}
bool PushNew(array[])
{
	if(top>=length+1)
	{
		return false;
	}
	else
	{
		array[++top]=array[++top];
		return true;
	}
}
main()
{
	Stack stack1,stack2;
	stack1.Push(23);
	stack1.Push(34);
	stack1.Push(1);
	stack1.Push(2);
	stack1.Push(55);
	stack1.Pop(stack2);
	stack2.ascending();
}
