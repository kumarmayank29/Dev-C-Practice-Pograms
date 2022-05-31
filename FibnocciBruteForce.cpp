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
	//Recurrsive call
	int a=fibnocci(n-1);  //Step 1
	int b=fibnocci(n-2); 
	return a+b;
	
	
	//Base Case
	//Small calculation
	//Recurrsive call
}
int main()
{
  int n;
  cin>>n;
  cout<<fibnocci(n)<<endl;	
}
