#include<iostream>
#include<cstring>
using namespace std;
int recursion(char ch,char ch1[])
{
	if(strchr(ch1,ch)!=NULL)
	{
		cout<<ch<<" Present In String:"<<endl;
		return 1;
	}
	else
	{
		return 0;
	}
	
}
main()
{
	char ch;
	cout<<"Enter Character:"<<endl;
	cin>>ch;
	char ch1[100];
	cout<<"Enter String To Check:"<<endl;
	cin>>ch1[100];
	cout<<recursion(ch,ch1);
}
