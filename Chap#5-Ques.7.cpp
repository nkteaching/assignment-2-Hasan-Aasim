#include<iostream>
#include <bits/stdc++.h> 
using namespace std; 
class StackQueue
{ 
	queue<int>queue1,queue2; 
	int top;
	public: 
		StackQueue() 
		{ 
			top=0; 
		}	 
		void push(int x) 
		{ 
			top++;
			queue2.push(x); 
			cout<<"The Pushed Element Is "<<x<<endl;
			while(!queue1.empty())
			{ 
				queue2.push(queue1.front()); 
				queue1.pop(); 
			}  
		queue<int>queue3=queue1; 
		queue1=queue2; 
		queue2=queue3; 
		} 
	void pop() 
	{ 
		if(queue1.empty())
		{
			return;
		} 
		else
		{
			int x;
		queue1.pop(); 
		top--;
		}
	} 
	int QueueTop()
	{ 
		if (queue1.empty())
		{
			return -1; 
		} 
		return queue1.front(); 
	} 
	int Size() 
	{ 
		return top;
	} 
}; 
int main() 
{ 
	StackQueue st1;
	st1.push(10); 
	st1.push(15); 
	st1.push(20);
	st1.push(25);
	cout<<"Popping Values"<<endl;
	st1.pop();
	st1.pop();
	cout<<"The Current Of Size Stack:"<<endl;
	cout<<st1.Size()<<endl;
	cout<<"The Topmost Value Of Stack:"<<endl;
	cout<<st1.QueueTop();
} 
