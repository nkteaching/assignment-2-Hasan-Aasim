#include<iostream>
#define length 100
using namespace std;
template <class T>
class Stack
{
	T top;
	public:
		Stack()
		{
			top=-1;
		}
		T array[length];
//		T Push(T x);
//		T Pop();
//		T Display();
bool Push(T x)
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
void Display()
{
	for(T i=0;i<(top+1);i++)
	{
		cout<<array[i]<<" ";
	}
}
};
main()
{
	Stack <int>stack1;
	Stack <float>stack2;
	stack1.Push(10);
	stack2.Push(21.9);
	stack1.Display();
}
