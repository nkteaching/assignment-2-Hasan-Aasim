#include<iostream>
using namespace std;
int series(int a,int deno,int num)
{
	if(deno==0)
	{
		return 0;
	}
	else
	{
		if(deno%2==0)
		{
			cout<<"+"<<num/deno<<" ";
			return series(a,deno++,num);
		}
		else if(deno%2!=0)
		{
			cout<<"-"<<num/deno<<" ";
			return series(a,deno++,num);
		}
	}
}
main()
{
	cout<<series(4,1,1);
}
