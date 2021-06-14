#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void printcombinationsum(int ind,int s,int n,int a[],vector<int>&ans)
{
	//base case when your n becomes zero
	if(ind==n)
	{
		if(s==0)
		{
		
		 for(auto it:ans)
		 {
		 	cout<<it<<" ";
		 }
		 cout<<"\n";
     	}
	return;
	}

    if(a[ind]<=s)
	{
		ans.push_back(a[ind]);
		printcombinationsum(ind,s-a[ind],n,a,ans);
		ans.pop_back(); //while coming bach remove the last element
	}
	printcombinationsum(ind+1,s,n,a,ans);
}
int main()
{
	int n,s;
	cin>>n>>s;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	vector<int>ans; //store possible combinations
	printcombinationsum(0,s,n,a,ans);
	return 0;
}
