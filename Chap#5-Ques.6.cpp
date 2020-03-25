#include <iostream>
using namespace std;
int putcommas(int num,int &count)
{
	if (num<= 0) 
	{
		count++;
		return 0;
	}
	else
	{	
		putcommas(num/1000,count);
		cout<<(num%1000)<<((count=1)?",":"");
		
	}
}
int main()
{
	int count=0;
	putcommas(123456789,count);
}
