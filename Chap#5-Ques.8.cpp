#include<iostream>
using namespace std;
int multiplication(int a,int b)
{	
	if(a==0 || b==0)
	{
		return 0;
	}
	else if(a<b)
	{
		return multiplication(b,a);
	}
	else if(b!=0)
	{
		return(a+multiplication(a,b-1));
	}
	
}
main()
{
	int x,y;
	cout<<"Enter Two Numbers:"<<endl;
	cin>>x;
	cin>>y;
	int c;
	c=multiplication(x,y);
	cout<<c;
}
