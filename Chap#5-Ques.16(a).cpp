#include<iostream>
using namespace std;
int palindrome(char ch[],int a,int b)
{
	if(ch[a]!=ch[b])
	{
		return 0;
	}
	else if(a<b+1)
	{
		return palindrome(ch,a+1,b--);
	}
	else
	{
		return 1;
	}
}
main()
{
	int size;
	cout<<"Enter The Size Of The Word:"<<endl;
	cin>>size;
	cout<<"Enter String:"<<endl;
	char ch[size];
	for(int i=0;i<size;i++)
	{
		cin>>*(ch+i);
	}
	int c;
	c=palindrome(ch,0,size-1);
	if(c==true)
	{
		cout<<"Palindrome:"<<endl;
	}
	else
	{
		cout<<"Not Palindrome:"<<endl;
	}
}
