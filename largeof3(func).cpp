#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void large(int a,int b,int c) //function declaration
{
	if((a>b)&&(a>c))
	{
		cout<<a<<"is greater";
	}
	else if((b>a)&&(b>c))
	{
		cout<<b<<"is greter";
	}
	else
	{
		cout<<c<<"is greater";
	}
}
int main()
{
	int a,b,c;
	a=10;
	b=40;
	c=25;
	large(a,b,c); //function calling
}
