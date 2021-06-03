#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void swap(int n1,int n2) //function declaration
{
	int temp=n1;
	n1=n2;
	n2=temp;
	cout<<n1<<" "<<n2;
}
int main()
{
	int n1,n2;
	n1=20;
	n2=60;
	swap(n1,n2); //function calling
}
