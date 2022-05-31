 #include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int minStepsToReachOneMemoizationHelper(int n,int *ans)
{
	if(n<=1)
	return 0;
	
	if(ans[n]!=-1)
	{
		return ans[n];
	}
 int x=minStepsToReachOneMemoizationHelper(n-1,ans);
 int y=INT_MAX,z=INT_MAX;
 if(n%2==0)
 {
 	y=minStepsToReachOneMemoizationHelper(n/2,ans);
 }
 
  if(n%3==0)
 {
 	z=minStepsToReachOneMemoizationHelper(n/3,ans);
 }
 
 int sol=min(x,min(y,z))+1;
 
  ans[n]=sol;
 
 return sol;
 
	
}
int minStepsToReachOneMemoization(int n)
{
	int *ans=new int(n+1);
	for(int i=0;i<(n+1);i++)
	{
		ans[i]=-1;
	}
	
	return minStepsToReachOneMemoizationHelper(n,ans);
}
int minStepsToReachOne(int n)
{
	//Base Case
	if(n<=1)
	return 0;
	int x=minStepsToReachOne(n-1);
	
	int y=INT_MAX;
	int z=INT_MAX;
	if(n%2==0)
	{
		 y=minStepsToReachOne(n/2);
	}
	if(n%3==0)
	{
		z=minStepsToReachOne(n/3);
	}
	int minSteps=min(x,min(y,z));

	return minSteps+1;
    
}
int main()
{
	int n;
	cin>>n;
	cout<<minStepsToReachOne(n)<<endl;
	cout<<minStepsToReachOneMemoization(n);
}
