#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void printcombinationsum(int n,vector<int>&ds)
{
	//base case when your n becomes zero
	if(n==0)
	{
		for(auto it:ds)
		{
			cout<<it<<" ";
		}
		cout<<"\n";
	}
	//call all possible 1 to n to get sum n
	for(int i=1;i<=n;i++)
	{
		ds.push_back(i);
		printcombinationsum(n-i,ds);
		ds.pop_back(); //while coming bach remove the last element
	}
}
int main()
{
	int n;
	cin>>n;
	vector<int>ans; //store possible combinations
	printcombinationsum(n,ans);
	return 0;
}
