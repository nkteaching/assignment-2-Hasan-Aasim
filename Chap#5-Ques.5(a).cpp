#include<iostream>
using namespace std;
int recursion(int a,int n)
{
	if(n==a)
	{
		return a;
	}
	else
	{
		if(a/2!=0)
			cout<<a<<" ";
			return recursion(a+1,n);
	}
}
main()
{
	int a=1,n;
	cout<<"Enter Value Of N:"<<endl;
	cin>>n;
	cout<<recursion(a,n);
}
