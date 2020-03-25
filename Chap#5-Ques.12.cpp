#include<iostream>
using namespace std;
bool cubes(int a,int n)
{
	if(n==a)
	{
		cout<< (n*n*n)<<" ";
	}
	else
	{
		cout<<a*a*a<<" ";
		return cubes(a+1,n);
	}
}
main()
{
	cout<<cubes(0,7);
}
