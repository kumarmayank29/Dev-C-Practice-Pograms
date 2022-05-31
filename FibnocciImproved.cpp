//0 1 1 2 3
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int fibnocci(int n)
{
	//Base Case -Terminating Condition || ye Smallest problem ka solution hoga
	if(n<=1)
	{
		return n;
	}
	int a=fibnocci(n-1);  //Step 1
	int b=fibnocci(n-2); 
	return a+b;
}
int finnocci_helper(int n,int *ans)
{
	//Base Case
	if(n<=1)
	return n;
	
	//Check if output already exists
	if(ans[n]!=-1)
	return ans[n];
	
	//Calculate It
	int a=fibnocci(n-1);  
	int b=fibnocci(n-2);    //  a=P->rchild + b=p->lchild)
	
	//Save This Now  ---Memoization
	ans[n]=a+b;
	
	//Return
	return ans[n];
	
	
}
int finnocci2(int n)
{
	int *ans=new int(n+1);
	for(int i=0;i<=n;i++)
	{
		ans[i]=-1;
	}
	return finnocci_helper(n,ans);
	
}
int main()
{
  int n;
  cin>>n;
  cout<<fibnocci(n)<<endl;	
  cout<<finnocci2(n)<<endl;	
  
}
