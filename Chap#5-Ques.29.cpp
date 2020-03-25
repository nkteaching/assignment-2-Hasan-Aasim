#include<iostream>
using namespace std;
int Factorial(int n)
{
	int x;
	if(n==0)
	{
		return 1;
	}
	else
	{
		return n*Factorial(n-1);
	}
}
main()
{
	cout<<Factorial(5);
	
}
