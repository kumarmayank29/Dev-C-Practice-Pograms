#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//Iterative Approcah
int fib3(int n)
{
	int *ans=new int(n+1);
	//Smallest Problem 
	ans[0]=0;
	ans[1]=1;
	//| 0 | 1  | 1  | 2   |   |
	//ans[2]=ans[0]+ans[1];
	for(int i=2;i<=n;i++)
	{
		ans[i]=ans[i-1]+ans[i-2];
	}
	return ans[n];
	
}
int main()
{
  int n;
  cin>>n;
  cout<<fib3(n)<<endl;	
  
  
}


/*

CODE 1

ITERATIVE+MEMOIZATION===>>>Dynamic Programming 
Smallest Problem
Bottom UP
| 0 |1 | 2  | 3 |



int fib3(int n)
{
	int *ans=new int(n+1);
	//Smallest Problem 
	ans[0]=0;
	ans[1]=1;
	//| 0 | 1  | 1  | 2   |   |
	//ans[2]=ans[0]+ans[1];
	for(int i=2;i<=n;i++)
	{
		ans[i]=ans[i-1]+ans[i-2];
	}
	return ans[n];
	
}


CODE 2
Brute Force
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


CODE 3
MEMOIZATION,Recurrsion
Top to down approach
6
5
4
3
2
1(Base Condition || terminating condition || Smallest Problem )


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

*/




